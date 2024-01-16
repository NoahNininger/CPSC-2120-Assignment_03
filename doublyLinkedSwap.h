#pragma once

#include <iostream>

using namespace std;

//This struct represents a node in a doubly linked list
//containing a "dummy" head and tail node
//Do not modify anything in this file

struct Node{

    int value; //value stored by this node
    Node * prev; //pointer to the previous node in list
    Node * next; //pointer to the next node in list

};

Node * arrayToList(int array[], int size);

//Return pointer to end of the list
Node * getTail(Node * head);

//Return pointer to node with "index"
//First node "index" 0, second node "index" 1, ...
Node * getNode(Node * head, int index);

//Print list forwards from start
void printForwards(Node * head);

//Print list backwards from end
void printBackwards(Node * tail);

// Implement the following function:
// p and afterp are pointers to the nodes to be swapped.
void swapWithNext(Node * p);
