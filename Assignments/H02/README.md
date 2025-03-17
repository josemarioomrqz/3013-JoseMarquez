## Jose Marquez
## Repo: 3013 - Advanced Structures

## Assignment 06: Hasing - Strategies and Collision Resolution


## Part A: Conceptual Questions

1. **Define Hasing and Collision Resoltion**
   
    - **What is a hash table and why is collision resolution necessary?** A hash table is a data structure that allows efficient storage and retrival of key-value pairs using a hash function to map keys to indices in an array. This mapping allows for average O(1) time complexity for insertions, deletions, and lookups.
  


    - **Explain the key differences between open hashing (chaining) and closed hashing (open addressing).**
  
    | **Aspect**                | **Open Hashing (chaining)**  | **Closed Hashing (open addressing)** |
    |---------------------------|----------------------------|--------------------------------------|
    | **Storage Method**        | Uses a linked list (or another data structure) at each index to store multiple keys. | Stores all elements directly in the hash table array. |
    | **Collision Handling**    | New elements are appended to a list at the same index. | A diferent index is found using using a probing tecnique (linear probing, quadratic probing, double hashing). |
    | **Memory Usage**          | Requires extra memory for pointers (linked list). | Uses only the fixed array space, leading to a better cache efficiancy. |
    | **Efficiency**            | Lookup is O(1) on average but O(n) is worst case scenario | Lookup can become slow (O(n)) when many collisions ocurr. |
    | **Deletion Complexity**   | Easier to delete elements without disrupting table structure | Deletion requires marking positions as "delete" or rehashing elements. |
    