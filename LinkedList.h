#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#ifndef PROJECT1_LINKEDLIST_H
#define PROJECT1_LINKEDLIST_H

template <typename T>

class LinkedList {

    class Node{};

    T* arr;
    T* dumpArr;

public:
void PrintForward() const ;
void PrintReverse() const ;
unsigned int NodeCount() const ;
void FindAll(vector<Node *> &outData, const T&value) const ;
const Node *Find(const T &data)const ;
Node *Find(const T &data);
const Node * GetNode(unsigned int index) const ;
Node * GetNode(unsigned int index);
Node *Head();
const Node *Head() const ;
Node *Tail();
const Node *Tail() const ;


void AddHead(const T &data);
void AddTail(const T &data);
void AddNodesHead(const T *data, unsigned int count);
void AddNodesTail(const T *data, unsigned int count);
void InsertAfter(Node *node, const T &data);
void InsertBefore(Node *node, const T &data);
void InsertAt(const T &data, unsigned int index);


bool RemoveHead();
bool RemoveTail();
unsigned int Remove(const T &data);
bool RemoveAt(int index);
void  Clear();

const T &operator[](unsigned int index)const;
T &operator[](unsigned int index);
bool operator==(const LinkedList<T> &rhs);
LinkedList<T> &operator=(const LinkedList<T> &rhs);

LinkedList();
LinkedList(const LinkedList<T> &list);
~LinkedList();

};


#endif //PROJECT1_LINKEDLIST_H
