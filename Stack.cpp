//
//  SortedList.cpp
//
//
//  Created by Eric Walsh on 1/30/14.
//
//

#include "Stack.h"

//ListNode for LinkedStack class
ListNode::ListNode(){
    info = "";
    next = NULL;
}
ListNode::ListNode(string inp){
    info = inp;
    next = NULL;
}
ListNode::ListNode(string inp, ListNode * target){
    info = inp;
    next = target;
}
ListNode::~ListNode(){
    delete next;
}
bool ListNode::operator == (const ListNode &s) const{
    return info==s.info;
}
void ListNode::print(){
    cout << info << " ";
    if(next!=NULL) next->print();
}

ArrayStack::ArrayStack(){
    buf = new string[arrSize];
}

ArrayStack::ArrayStack(int cap){
    arrSize = cap;
    buf = new string[arrSize];
}

ArrayStack::~ArrayStack(){
    delete buf;
}

bool ArrayStack::isEmpty(){ //Big-O is O(1)
    return place==0;
}

bool ArrayStack::isFull(){ //Big-O is O(1)
    return place==arrSize;
}

void ArrayStack::push(string s){
    if(!isFull()) buf[place++]=s;
}

string ArrayStack::pop(){
    if(!isEmpty()){
        string ans;
        ans = buf[--place];
        return ans;
    }
}

string ArrayStack::top(){
    if(!isEmpty()) return buf[place-1];
}

void ArrayStack::print(){
    for(int i = 0; i<place; i++) cout << "Entry " << i << " : " << buf[i] << endl;
}

LinkedStack::LinkedStack(){
    head = NULL;
}

LinkedStack::LinkedStack(ListNode * h){
    head = h;
}

LinkedStack::~LinkedStack(){
    delete head;
}

bool LinkedStack::isFull(){
    return false;
}

bool LinkedStack::isEmpty(){
    return head==NULL;
}

void LinkedStack::push(string s){
    head = new ListNode(s, head);
}

string LinkedStack::top(){
    cout << head->info << endl;
}

string LinkedStack::pop(){
    if(!isEmpty()){
        ListNode * temp = head;
        head = head->next;
        temp->next = NULL;
        return temp->info;
    }
}

void LinkedStack::print(){
    cout << "PRINTING STACK FROM TOP DOWN..." << endl;
    for(ListNode * i = head; i; i=i->next) cout << i->info << endl;
}
