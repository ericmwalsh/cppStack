//
//  SortedList.h
//
//
//  Created by Eric Walsh on 1/30/14.
//
//
#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;


#ifndef ____ListNode__
#define ____ListNode__

class ListNode{

public:
    string info;
    ListNode * next;
    ListNode();
    ListNode(string inp);
    ListNode(string inp, ListNode * target);
    ~ListNode();
    bool operator == (const ListNode &s) const;
    void print();
};

#endif // list_node

#ifndef ____Stack__
#define ____Stack__
class Stack
{
public:

    virtual void push(string s) = 0;
    virtual string pop(void) = 0;
    virtual string top(void) = 0;
    virtual bool isEmpty(void) = 0;
    virtual bool isFull(void) = 0;
    //virtual ~Stack (void){}
};


#endif // ____Stack__

#ifndef ____ArrayStack__
#define ____ArrayStack__

class ArrayStack : public Stack
{
private:
    int arrSize=45500, place=0; //data member to make top and pop O(1)
    string * buf;
public:
    ArrayStack();
    ArrayStack(int cap);
    ~ArrayStack();
    void push(string s);
    string pop();
    string top();
    bool isEmpty();
    bool isFull();
    void print();
};
#endif // ____ArrayStack__

#ifndef ____LinkedStack__
#define ____LinkedStack__

class LinkedStack : public Stack
{
private:
    ListNode * head;
public:
    LinkedStack();
    LinkedStack(ListNode * h);
    ~LinkedStack();
    void push(string s);
    string pop();
    string top();
    bool isEmpty();
    bool isFull();
    void print();
};
#endif // ____LinkedStack__
