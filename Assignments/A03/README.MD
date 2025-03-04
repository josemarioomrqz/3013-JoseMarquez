## Jose Marquez
## Repo: 3013 - Advance Structures

## Assignment 03 - Binary Search Tree (Delete Method)

## Deletion Cases Handled: 

The delete function properly handles **three main cases** in a Binary Search

1. **Deleting a Leaf Node (No Children)**
-If the node has no left or right children, we simply remove it by setting the parent´s reference to ´nullptr´ and deletung the node.

2. **Deleting a Node with One Child**
- If the node has **one child**, we replacr it with its child.

3. **Deleting a Node with Two Children** 
-If the node has **two children**, we replacr it with its **Inorder Successor** (smallest value in the right subtree).

##  Choosing a Replacement Value for Nodes with Two Children

When a node has **two children**, we need to replace it while **maintaining BST properties**. We have **two options**:

1. **Inorder Successor**:  
   - The **smallest value in the right subtree** replaces the deleted node.
   - This ensures that all values **smaller than the new node** remain in the left subtree.
   - **Used in our implementation** because it avoids deep left subtree traversal.

2. **Inorder Predecessor**:  
   - The **largest value in the left subtree** can also be used.
   - This would require additional traversal to find the largest left-side node.

We chose the **Inorder Successor** as it ensures a **balanced tree structure**, prevents unnecessary traversal, and is **simpler to implement**.

## Challenges Faced

Implementing `deleteNode()` posed **several challenges**:

1. **Handling Root Node Deletion Properly**  
   - If the root node was deleted, it required special handling to ensure the **new root was assigned correctly**.
   - Our solution ensures `root = child;` when needed.

2. **Maintaining BST Order**  
   - Using **Inorder Successor** ensured the BST properties were preserved.
   - Implementing it **iteratively** (instead of recursion) made it **more efficient**.

3. **Ensuring Efficient Memory Management**  
   - Deleting nodes without **dangling pointers** was crucial.
   - Our solution updates the parent-child relationships before `delete`.

4. **Testing with Various BST Structures**  
   - We tested with:
     - **Empty tree** (Deleting when no elements exist).
     - **Tree with one node** (Ensuring the tree becomes `nullptr` after deletion).
     - **Large BSTs** (Ensuring efficiency with thousands of nodes).
     - **Skewed trees** (Ensuring correct deletion even when the BST behaves like a linked list).


##  Conclusion
My BST delete function is **optimized, iterative, and handles all edge cases** efficiently. It maintains BST properties while properly updating node relationships, ensuring correctness across different tree structures.