## Jose Marquez
## Repo: 3013 - Advanced Structures

## Assignment 05 - AVL tree (Insertions with Multiple Rotations)


## Left - Right and Right - Left Rotations

**Set : 10, 20, 30, 15, 25, 5, 35, 27** 

| **Insert 10 (Img01)** |
|:---:|
|<img src="./01.png" width="100">|
| BF(10) = 0 (Balanced) |


| **Insert 20 (Img02)** |
| :-----:|
|<img src="./Img02.png" width="200">|
| BF (20) = 0 - 1 = -1 (Balanced) |


| **Insert 30 (Img03)** |
|:---:|
|<img src="./03.png" width="300">|
| BF (30) = 0 |
| BF (20) = -1 |
| BF (10) = 0 - 2 = -2  
| **Imbalance at Node 10 (Right-Right case)** |


| **Rotation RR (Right-Right) at 10** |
| :---: |
|<img src="./04.png" width="350">|
|BF (10) = 0 |
|BF (30) = 0 |
|BF (20) = 0 |
| Balanced after rotation |



| **Insert 15 (Img05)** |
| :---: |
|<img src="./05.png" width="400">|
|BF (15) = 0 |
|BF (10) = 0 - 1 = -1 |
|BF (20) = 1 - 1 = 0 (Balanced) |



| **Insert 25 (Img06)** |
| :---: |
|<img src="./06.png" width="450">|
|BF (25) = 0 |
|BF (30) = 1 - 0 = 1 |
|BF (20) = 1 - 2 = -1 (Balanced) |


| **Insert 5 (Img07)** |
| :---: |
|<img src="./07.png" width="500">|
|BF (5) = 0 |
|BF (10) = 1 - 1 = 0 |
|BF (20) = 2 - 2 = 0 (Balanced) |


| **Insert 35 (Img08)** |
| :---: |
|<img src="./08.png" width="550">|
|BF (35) = 0 |
|BF (30) = 1 - 1 = 0 |
|BF (20) = 2 - 2 = 0 (Balanced) |


| **Insert 27 (Img09)** |
| :---: |
|<img src="./09.png" width="600">|
|BF (27) = 0 |
|BF (25) = 0 - 1 = -1 |
|BF (30) = 2 - 1 = 1  |
|BF (20) = 2 - 3 = -1 |


| **Final AVL Tree** |
| :---: |
|<img src="./09.png" width="600">|
| **Balanced after all insertions and rotations** |


### **Summary**
 - The AVL tree was **successfully balanced** after multiple insertions.
- A **Right-Right (RR) Rotation** was performed at **Node 10**.
- No additional rotations were needed after the **Insert 27** step.
- The final tree has a **maximum balance factor of -1, 0, or 1** confirming that it is AVL-balanced.