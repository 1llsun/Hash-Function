#pragma once
#include "Node.h"

class HashTable {
private:
    int size;
    Node* table[100];
    int hashFunction(int);

public:

    HashTable(int); 
    void insert(int);
    bool search(int);
    void display();
};
