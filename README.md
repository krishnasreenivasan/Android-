# Android-
# LRU Cache (Least Recently Used) – C++ Implementation

This repository contains an efficient implementation of an **LRU Cache** using C++ with `O(1)` time complexity for both `get` and `put` operations.

## Features
- Efficient `O(1)` operations using HashMap + Doubly Linked List
- Clean modular code
- Easy to integrate and extend

## File Structure
- `LRUCache.cpp` – Contains the main logic
- `LRUCache.h` – Class definition and method declarations
- `main.cpp` – Demonstrates usage of the cache
- 
## 🛠 How to Run
Compile and run using g++:
```bash
g++ main.cpp LRUCache.cpp -o lru
./lru

##  Sample Output
1
-1
-1
3
4

##  Complexity
| Operation | Time | Space |
|-----------|------|-------|
| `get`     | O(1) | O(n)  |
| `put`     | O(1) | O(n)  |


