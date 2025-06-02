// LRUCache.h
#ifndef LRUCACHE_H
#define LRUCACHE_H

#include <unordered_map>
using namespace std;

class LRUCache {
private:
    struct Node {
        int key, value;
        Node* prev;
        Node* next;
        Node(int k, int v): key(k), value(v), prev(nullptr), next(nullptr) {}
    };

    int capacity;
    unordered_map<int, Node*> cache;
    Node* head;
    Node* tail;

    void remove(Node* node);
    void insertToFront(Node* node);

public:
    LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);
};

#endif
