// LRUCache.cpp
#include "LRUCache.h"

LRUCache::LRUCache(int capacity): capacity(capacity) {
    head = new Node(0, 0);
    tail = new Node(0, 0);
    head->next = tail;
    tail->prev = head;
}

int LRUCache::get(int key) {
    if (cache.find(key) == cache.end()) return -1;
    Node* node = cache[key];
    remove(node);
    insertToFront(node);
    return node->value;
}

void LRUCache::put(int key, int value) {
    if (cache.find(key) != cache.end()) {
        Node* node = cache[key];
        node->value = value;
        remove(node);
        insertToFront(node);
    } else {
        if (cache.size() == capacity) {
            Node* lru = tail->prev;
            remove(lru);
            cache.erase(lru->key);
            delete lru;
        }
        Node* newNode = new Node(key, value);
        insertToFront(newNode);
        cache[key] = newNode;
    }
}

void LRUCache::remove(Node* node) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
}

void LRUCache::insertToFront(Node* node) {
    node->next = head->next;
    node->prev = head;
    head->next->prev = node;
    head->next = node;
}
