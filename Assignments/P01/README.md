## Jose Marquez and Gabriel Gacovicaj
## Repo - 3013 Advance Structures

## Presentation 1 - A* Search Algorithm


1. ## Introduction

- **Topic**: A* Search Algorithm
  
- **Description**: A* is a popular informed search algorithem widely used in pathfinding and graph traversal know for finding the shorest efficiently.
  
- **Why is it intresting?**: It combines features of uniform-cost search and greedy best first search, providing optimallity and efficiency. It is widely implemented in real world scenarios like GPS navigation, game AI, and robotics. 


2. ## Core Mechanics
   
- **High-Level Overview:**
    
    - Uses heuristics to guide the search towards the most promesing path.
    - Evalutaes nodes based on **f(n) = g(n) + h(n):**

        - **g(n):** Cost from start node to current node.
        - **h(n):** Estimated cost from current node to goal.
  

- **Edge Cases & Design Tradeoffs:**
    
    - Works optimally if heuristics is admissible (never overestimates the true cost).
    - Performance can degrade significantly if heuristics is poorly chosen. 
    - Tradeoff between heuristic complexity and computational overhead.


3. ## Uses Cases/Imapct 
   
- **Real-World Applications:**
  
    - GPS navigation and route finding.
    - Game development for NPC pathfinding.
    - Autonomous vehicle navigation systems. 

- **Theorical Significance:**
  
    - Benchmark for development and testing heuristic - based search algorithems.
    - Bases for numerous advanced search strategies. 

- **Comparison to Alternatives:**
  
    - Better performance compared to uninformed search (BFS, DFS).
    - More optimal than greedy algorithems due to comprehensive evaluation.


4. ## Conclusion
   
    - **Key Points:**
        - A* efficiantly combines path cost nd heuristic to find optimal paths.
        - Proper heuristic selection is crucial for performance. 

