//
//  SortedList.cpp
//
//
//  Created by Eric Walsh on 1/30/14.
//
//

#include "Queue.h"

ArrayQueue::ArrayQueue(){
    buf = new string[size];
}

ArrayQueue::ArrayQueue(int cap){
    size = cap;
    buf = new string[size];
}

ArrayQueue::~ArrayQueue(){
    delete buf;
}

bool ArrayQueue::isEmpty(){ //Big-O is O(1)
    return begin==back;
}

bool ArrayQueue::isFull(){ //Big-O is O(1)
    return counter==size && (back)%size==begin;
}

void ArrayQueue::enqueue(string s){
    if(isFull()) throw ContainerOverflow("Unable to execute enqueue(string s) : ArrayQueue is full!");
    else{
        buf[back]=s;
        back=(back+1)%size;
        counter++;
    }
}

string ArrayQueue::dequeue(){
    if(isEmpty()) throw ContainerUnderflow("Unable to execute dequeue() : ArrayQueue is empty!");
    else{
        string ans = buf[begin];
        begin=(begin+1)%size;
        counter--;
        return ans;
    }
}

string ArrayQueue::front(){
    if(isEmpty()) throw ContainerUnderflow("Unable to execute front() : ArrayQueue is empty!");
    else return buf[begin];
}

void ArrayQueue::print(){
    for(int i = begin; i<back; i++) cout << "Entry " << i << " : " << buf[i] << endl;
}

LinkedQueue::LinkedQueue(){
    head = NULL;
    tail = NULL;
}

LinkedQueue::LinkedQueue(ListNode * h){
    head = h;
}

LinkedQueue::~LinkedQueue(){
    delete head, tail;
}

bool LinkedQueue::isFull(){
    return false;
}

bool LinkedQueue::isEmpty(){
    return head==NULL;
}

void LinkedQueue::enqueue(string s){
    if(!isFull()){
        if(head==NULL) head = new ListNode(s);
        else if(tail==NULL){
            tail = new ListNode(s);
            head->next = tail;
        }
        else{
            tail->next = new ListNode(s);
            tail = tail->next;
        }
    }
}

string LinkedQueue::front(){
    if(isEmpty()) throw ContainerUnderflow("Unable to execute front() : LinkedQueue is empty!");
    else cout << head->info << endl;
}

string LinkedQueue::dequeue(){
    if(isEmpty()) throw ContainerUnderflow("Unable to execute dequeue() : LinkedQueue is empty!");
    else{
        if(tail==NULL){
            ListNode * temp = head;
            head = NULL;
            return temp->info;
        }
        else{
            ListNode * temp = head;
            head = head->next;
            temp->next = NULL;
            return temp->info;
        }
    }
}

void LinkedQueue::print(){
    cout << "PRINTING QUEUE FROM START TO FINISH..." << endl;
    for(ListNode * i = head; i; i=i->next) cout << i->info << endl;
}

