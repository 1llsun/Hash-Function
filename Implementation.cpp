#include <iostream>
#include "HashTable.h"
using namespace std;

Node::Node()
{
    this->data = 0;
    this->next = NULL;
    this->prev = NULL;
}

Node::Node(int data)
{
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
}

int Node::getData()
{
    return data;
}

Node* Node::getNext()
{
    return next;
}

Node* Node::getPrev()
{
    return prev;
}

void Node::setData(int data) 
{
    this->data = data;
}

void Node::setNext(Node* next) 
{
    this->next = next;
}

void Node::setPrev(Node* prev) 
{
    this->prev = prev;
}

HashTable::HashTable(int size) 
{
    this->size = size;
    for (int i = 0; i < size; i++) 
    {
        table[i] = NULL;
    }
}


int HashTable::hashFunction(int key)
{
    return key % size;
}

void HashTable::insert(int key) 
{
    int index = hashFunction(key);

    Node* newNode = new Node(key);

    newNode->setNext(table[index]);

    if (table[index] != nullptr) 
    {
        table[index]->setPrev(newNode);
    }
    table[index] = newNode;

    cout << "Inserted " << key << " at index " << index << endl;
}

bool HashTable::search(int key) 
{
    int index = hashFunction(key);
    Node* temp = table[index];

    while (temp != nullptr) 
    {
        if (temp->getData() == key) 
        {
            return true;
        }
        temp = temp->getNext();
    }

    return false;
}
void HashTable::display() 
{
    cout << "Hash Table:" << endl;

    for (int i = 0; i < size; i++) 
    {
        cout << i << ": ";
        Node* temp = table[i];
        if (temp == nullptr) 
        {
            cout << "Empty";
        }
        else 
        {
            while (temp != nullptr) 
            {
                cout << temp->getData() << " -> ";
                temp = temp->getNext();
            }
            cout << "NULL";
        }
        cout << endl;
    }
}
