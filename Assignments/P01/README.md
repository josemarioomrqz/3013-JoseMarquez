## Jose Marquez and Gabriel Gacovicaj
## Repo - 3013 Advance Structures

## Presentation 1 - A* Search Algorithm


1. ## Introduction

- **Topic**: A* Search Algorithm
  
- **Description**: A* is a popular informed search algorithm widely used in pathfinding and graph traversal, known for finding the shortest path efficiently.
  
- **Why is it interesting?**: It combines features of uniform-cost search and greedy best-first search, providing optimality and efficiency. It is widely implemented in real-world scenarios like GPS navigation, game AI, and robotics. 


2. ## Core Mechanics
   
- **High-Level Overview:**
    
    - Uses heuristics to guide the search towards the most promising path.
    - Evaluates nodes based on **f(n) = g(n) + h(n):**

        - **g(n):** Cost from start node to current node.
        - **h(n):** Estimated cost from current node to goal.
  

- **Edge Cases & Design Tradeoffs:**
    
    - Works optimally if heuristics are admissible (never overestimate the true cost).
    - Performance can degrade significantly if heuristics are poorly chosen. 
    - Tradeoff between heuristic complexity and computational overhead.


3. ## Use Cases & Impact 
   
- **Real-World Applications:**
  
    - GPS navigation and route finding.
    - Game development for NPC pathfinding.
    - Autonomous vehicle navigation systems. 

- **Theoretical Significance:**
  
    - Benchmark for development and testing heuristic-based search algorithms.
    - Basis for numerous advanced search strategies. 

- **Comparison to Alternatives:**
  
    - Better performance compared to uninformed search (BFS, DFS).
    - More optimal than greedy algorithms due to comprehensive evaluation.


4. ## Conclusion
   
    - **Key Points:**
        - A* efficiently combines path cost and heuristic to find optimal paths.
        - Proper heuristic selection is crucial for performance. 


https://www.canva.com/design/DAGmxm-TY3o/jD9pqHv7OWVnO-Y4DNsEmA/edit?utm_content=DAGmxm-TY3o&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton