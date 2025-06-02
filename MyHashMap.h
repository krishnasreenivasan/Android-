// MyHashMap.h
#ifndef MYHASHMAP_H
#define MYHASHMAP_H

class MyHashMap {
public:
    MyHashMap();
    void put(int key, int value);
    int get(int key);
    void remove(int key);

private:
    static const int SIZE = 10007;
    std::vector<std::pair<int, int>> table[SIZE];
    int hash(int key);
};

#endif
