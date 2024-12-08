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
