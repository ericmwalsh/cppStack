//
//  testStackAndQueue.cpp
//
//
//  Created by Eric Walsh on 1/30/14.
//
//

#include "PCTimer.h"
#include "Queue.h"

void testArrayStack(){
    ArrayStack * x =  new ArrayStack();
    x->push("a");
    x->push("b");
    x->push("c");
    x->push("d");
    x->push("e");
    x->push("f");
    x->push("g");
    x->print();
    x->pop();
    x->print();
    cout << "hey this is the top : " << x->top() << endl;
    x->pop();
    cout << "hey this is the pop : " << x->pop() << endl;
    x->print();
}
void testArrayStackFinal(){
    ArrayStack * a = new ArrayStack();
    fillAll("random.txt", a);
    emptyAll("ArrayStackOutput.txt", a);
}
void testLinkedStack(){
    LinkedStack * x = new LinkedStack();
    fillAll("words.txt", x);
    cout << x->pop() << endl;
    cout << x->pop() << endl;
    cout << x->pop() << endl;
    cout << x->pop() << endl;
    cout << x->pop() << endl;
    cout << endl << endl;
    x->push("oi");
    x->push("ah");
    x->print();
}
void testLinkedStackFinal(){
    LinkedStack * a = new LinkedStack();
    fillAll("random.txt", a);
    emptyAll("LinkedStackOutput.txt", a);
}
void testIsBalanced(){
    cout << "Is '({(())})((([({})])))(((((()([{()}])(()))))))()' balanced? : "<< isBalanced("({(())})((([({})])))(((((()([{()}])(()))))))()") << endl;
    cout << "Is '({(())})((([({})])))(((((()([{()}])(())))))' balanced? : "<< isBalanced("({(())})((([({})])))(((((()([{()}])(())))))") << endl;
    cout << "Is '({(())})((([({})])))(((((()([{()}])(()))))))()])' balanced? : "<< isBalanced("({(())})((([({})])))(((((()([{()}])(()))))))()])") << endl;
    cout << "Is '((()))' balanced? : "<< isBalanced("((()))") << endl;
    cout << "Is '{{}' balanced? : "<< isBalanced("{{}") << endl;
    cout << "Is '{[()]}' balanced? : "<< isBalanced("{[()]}") << endl;
}
void testArrayQueue(){
    ArrayQueue * a = new ArrayQueue();
    fillAll("words.txt", a);
    a->print();
    a->dequeue();
    a->print();
    a->enqueue("hello");
    a->print();
}
void testArrayQueueFinal(){
    ArrayQueue * a = new ArrayQueue();
    fillAll("random.txt", a);
    emptyAll("ArrayQueueOutput.txt", a);
}
void testLinkedQueueFinal(){
    LinkedQueue * a = new LinkedQueue();
    fillAll("random.txt", a);
    emptyAll("LinkedQueueOutput.txt", a);
}
void testArrayStackExceptions(){
    ArrayStack * a = new ArrayStack(2);
    try{
        cout << "Attempting to pop from an empty ArrayStack..." << endl;
        a->pop();
    }
    catch(ContainerUnderflow & c){
        cout << "ContainerUnderflow Exception: " << c.msg << endl;

    }
    try{
        cout << "Attempting to top from an empty ArrayStack..." << endl;
        a->top();
    }
    catch(ContainerUnderflow & c){
        cout << "ContainerUnderflow Exception: " << c.msg << endl;

    }
    a->push("a");
    a->push("b");
    try{
        cout << "Attempting to push to a full ArrayStack..." << endl;
        a->push("c");
    }
    catch(ContainerOverflow & c){
        cout << "ContainerOverflow Exception: " << c.msg << endl;

    }
}
void testLinkedStackExceptions(){
    LinkedStack * a = new LinkedStack();
    try{
        cout << "Attempting to pop from an empty LinkedStack..." << endl;
        a->pop();
    }
    catch(ContainerUnderflow & c){
        cout << "ContainerUnderflow Exception: " << c.msg << endl;

    }
    try{
        cout << "Attempting to top from an empty Linkedtack..." << endl;
        a->top();
    }
    catch(ContainerUnderflow & c){
        cout << "ContainerUnderflow Exception: " << c.msg << endl;

    }
}
void testArrayQueueExceptions(){
    ArrayQueue * a = new ArrayQueue(2);
    try{
        cout << "Attempting to dequeue from an empty ArrayQueue..." << endl;
        a->dequeue();
    }
    catch(ContainerUnderflow & c){
        cout << "ContainerUnderflow Exception: " << c.msg << endl;

    }
    try{
        cout << "Attempting to front from an empty ArrayQueue..." << endl;
        a->front();
    }
    catch(ContainerUnderflow & c){
        cout << "ContainerUnderflow Exception: " << c.msg << endl;

    }
    a->enqueue("a");
    a->enqueue("b");
    try{
        cout << "Attempting to enqueue to a full ArrayQueue..." << endl;
        //cout << a.counter << " and " << a.back << endl;
        a->enqueue("c");
    }
    catch(ContainerOverflow & c){
        cout << "ContainerOverflow Exception: " << c.msg << endl;

    }
}
void testLinkedQueueExceptions(){
    LinkedQueue * a = new LinkedQueue();
    try{
        cout << "Attempting to dequeue from an empty LinkedQueue..." << endl;
        a->dequeue();
    }
    catch(ContainerUnderflow & c){
        cout << "ContainerUnderflow Exception: " << c.msg << endl;

    }
    try{
        cout << "Attempting to front from an empty LinkedQueue..." << endl;
        a->front();
    }
    catch(ContainerUnderflow & c){
        cout << "ContainerUnderflow Exception: " << c.msg << endl;

    }
}
void runAllStructures(){
    cout << "ArrayStack:" << endl << endl;
    testArrayStackFinal();
    cout << endl << "LinkedStack:" << endl << endl;
    testLinkedStackFinal();
    cout << endl << "ArrayQueue:" << endl << endl;
    testArrayQueueFinal();
    cout << endl << "LinkedQueue:" << endl << endl;
    testLinkedQueueFinal();
    cout << endl << "isBalanced() using LinkedStack:" << endl << endl;
    testIsBalanced();
}
void testAllErrors(){
    cout << endl << endl << "ArrayStack errors:" << endl << endl;
    testArrayStackExceptions();
    cout << endl << "LinkedStack errors:" << endl << endl;
    testLinkedStackExceptions();
    cout << endl << "ArrayQueue errors:" << endl << endl;
    testArrayQueueExceptions();
    cout << endl << "LinkedQueue errors:" << endl << endl;
    testLinkedQueueExceptions();
}
int main(int argc, const char * argv[]){
    runAllStructures();
    testAllErrors();
    return 0;
}
