#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

class GraphvizBST {
public:
    static void saveDotFile(const std::string &filename, const std::string &dotContent) {
        std::ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << dotContent;
            outFile.close();
            std::cout << "DOT file saved: " << filename << std::endl;
        } else {
            std::cerr << "Error: Could not open file " << filename << std::endl;
        }
    }

    static std::string generateDot(const Node *root) {
        std::string dot = "digraph BST {\n";
        dot += "    node [fontname=\"Arial\"];\n";
        dot += generateDotHelper(root);
        dot += "}\n";
        return dot;
    }

private:
    static std::string generateDotHelper(const Node *node) {
        if (!node)
            return "";
        std::string result;
        if (node->left) {
            result += "    " + std::to_string(node->data) + " -> " + std::to_string(node->left->data) + " [label=\"L\"];\n";
            result += generateDotHelper(node->left);
        }
        if (node->right) {
            result += "    " + std::to_string(node->data) + " -> " + std::to_string(node->right->data) + " [label=\"R\"];\n";
            result += generateDotHelper(node->right);
        }
        return result;
    }
};

class Bst {
    Node *root;

    void _print(Node *subroot) {
        if (!subroot) return;
        _print(subroot->left);
        cout << subroot->data << " ";
        _print(subroot->right);
    }

    void _insert(Node *&subroot, int x) {
        if (!subroot)
            subroot = new Node(x);
        else if (x < subroot->data)
            _insert(subroot->left, x);
        else
            _insert(subroot->right, x);
    }

    Node* _findMin(Node* node) {
        while (node->left) node = node->left;
        return node;
    }

public:
    Bst() { root = nullptr; }

    void insert(int x) { _insert(root, x); }

    void deleteNode(int key) {
        Node* parent = nullptr;
        Node* current = root;

        // Search for the node and track its parent
        while (current && current->data != key) {
            parent = current;
            if (key < current->data)
                current = current->left;
            else
                current = current->right;
        }

        // If the node is not found
        if (!current) {
            cout << "Key " << key << " not found in BST.\n";
            return;
        }

        // Case 1: Leaf Node (No children)
        if (!current->left && !current->right) {
            if (current == root) root = nullptr;
            else if (parent->left == current) parent->left = nullptr;
            else parent->right = nullptr;
            delete current;
        }
        // Case 2: One Child
        else if (!current->left || !current->right) {
            Node* child = (current->left) ? current->left : current->right;
            if (current == root) root = child;
            else if (parent->left == current) parent->left = child;
            else parent->right = child;
            delete current;
        }
        // Case 3: Two Children
        else {
            Node* successorParent = current;
            Node* successor = current->right;
            while (successor->left) {
                successorParent = successor;
                successor = successor->left;
            }

            // Replace current node with successor
            current->data = successor->data;

            // Delete successor node
            if (successorParent->left == successor)
                successorParent->left = successor->right;
            else
                successorParent->right = successor->right;

            delete successor;
        }
    }

    bool search(int key) {
        Node* current = root;
        while (current) {
            if (key == current->data) return true;
            current = (key < current->data) ? current->left : current->right;
        }
        return false;
    }

    void print() {
        _print(root);
        cout << endl;  // Fix: Ensuring the output is formatted correctly
    }

    void saveDotFile(const std::string &filename) {
        std::string dotContent = GraphvizBST::generateDot(root);
        GraphvizBST::saveDotFile(filename, dotContent);
    }
};

// Test function to verify correctness
void testBST() {
    Bst tree;

    cout << "Testing Empty Tree Deletion...\n";
    tree.deleteNode(10);
    tree.print();

    cout << "\nInserting elements...\n";
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);
    tree.print();

    cout << "\nTesting Deletion of Leaf Node (20)...\n";
    tree.deleteNode(20);
    tree.print();

    cout << "\nTesting Deletion of Node with One Child (30)...\n";
    tree.deleteNode(30);
    tree.print();

    cout << "\nTesting Deletion of Node with Two Children (50)...\n";
    tree.deleteNode(50);
    tree.print();

    cout << "\nTesting Deletion of a Non-Existent Node (100)...\n";
    tree.deleteNode(100);
    tree.print();
}

bool unique_value(int *arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return false;
        }
    }
    return true;
}

int main() {
    testBST(); // Fixed: Calling testBST() inside main

    Bst tree;
    int root = pow(2, 15) / 2;
    int max = pow(2, 15) - 1;
    vector<int> arr;
    arr.push_back(root);
    tree.insert(root);
    for (int i = 1; i < 5000; i++) {
        int r = rand() % max;
        while (!unique_value(arr.data(), arr.size(), r)) {
            r = rand() % max;
        }
        tree.insert(r);
        arr.push_back(r);
    }

    tree.print();
    tree.saveDotFile("bst_snapshot.dot");
}