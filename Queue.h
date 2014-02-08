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

#include "Stack.h"
using namespace std;




#ifndef ____Queue__
#define ____Queue__

class Queue
{
public:

    virtual void enqueue(string s) = 0;
    virtual string dequeue(void) = 0;
    virtual string front(void) = 0;
    virtual bool isEmpty(void) = 0;
    virtual bool isFull(void) = 0;
    //virtual ~Stack (void){}
};


#endif // ____Queue__

#ifndef ____ArrayQueue__
#define ____ArrayQueue__

class ArrayQueue : public Queue
{
private:
    int size=45500, begin=0, back=0, counter=0; //data member to make top and pop O(1)
    string * buf;
public:
    ArrayQueue();
    ArrayQueue(int cap);
    ~ArrayQueue();
    void enqueue(string s);
    string dequeue();
    string front();
    bool isEmpty();
    bool isFull();
    void print();
};
#endif // ____Queue__

#ifndef ____LinkedQueue__
#define ____LinkedQueue__

class LinkedQueue : public Queue
{
private:
    ListNode * head, * tail;
public:
    LinkedQueue();
    LinkedQueue(ListNode * h);
    ~LinkedQueue();
    void enqueue(string s);
    string dequeue();
    string front();
    bool isEmpty();
    bool isFull();
    void print();
};
#endif // ____LinkedQueue__
