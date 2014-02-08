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
void runAll(){
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
int main(int argc, const char * argv[]){
    runAll();
    return 0;
}
