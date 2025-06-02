// main.cpp
#include <iostream>
#include "LRUCache.h"

int main() {
    LRUCache lru(2);
    lru.put(1, 1);
    lru.put(2, 2);
    std::cout << lru.get(1) << std::endl; // 1
    lru.put(3, 3);                        // evicts 2
    std::cout << lru.get(2) << std::endl; // -1
    lru.put(4, 4);                        // evicts 1
    std::cout << lru.get(1) << std::endl; // -1
    std::cout << lru.get(3) << std::endl; // 3
    std::cout << lru.get(4) << std::endl; // 4
    return 0;
}
