//
//  SortedList.cpp
//
//
//  Created by Eric Walsh on 1/30/14.
//
//

#include "Stack.h"

ContainerUnderflow::ContainerUnderflow(string s){
    msg = s;
}
ContainerOverflow::ContainerOverflow(string s){
    msg = s;
}
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

void ArrayStack::push(string s){  //O(1)
    if(isFull()) throw ContainerOverflow("Unable to execute push(string s) : ArrayStack is full!");
    else buf[place++]=s;
}

string ArrayStack::pop(){ //O(1)
    if(isEmpty()) throw ContainerUnderflow("Unable to execute pop() : ArrayStack is empty!");
    else{
        string ans;
        ans = buf[--place];
        return ans;
    }
}

string ArrayStack::top(){ //O(1)
    if(isEmpty()) throw ContainerUnderflow("Unable to execute top() : ArrayStack is empty!");
    else return buf[place-1];
}

void ArrayStack::print(){ //O(N)
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

void LinkedStack::push(string s){ //O(1)
    head = new ListNode(s, head);
}

string LinkedStack::top(){ //O(1)
    if(isEmpty()) throw ContainerUnderflow("Unable to execute top() : LinkedStack is empty!");
    else cout << head->info << endl;
}

string LinkedStack::pop(){ //O(1)
    if(isEmpty()) throw ContainerUnderflow("Unable to execute pop() : LinkedStack is empty!");
    else{
        ListNode * temp = head;
        head = head->next;
        temp->next = NULL;
        return temp->info;
    }
}

void LinkedStack::print(){ //O(N)
    cout << "PRINTING STACK FROM TOP DOWN..." << endl;
    for(ListNode * i = head; i; i=i->next) cout << i->info << endl;
}