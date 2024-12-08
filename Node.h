#pragma once


class Node {
private:
    int data;
    Node* next;
    Node* prev;

public:

    Node();
    Node(int);

    int getData();
    Node* getNext();
    Node* getPrev();

    void setData(int);
    void setNext(Node*);
    void setPrev(Node*);
};


