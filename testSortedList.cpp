//
//  testSortedList.cpp
//
//
//  Created by Eric Walsh on 1/30/14.
//
//

#include "Stack.h"
#include "PCTimer.h"

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
    fillAll("words.txt", a);
    a->print();
    emptyAll("output.txt", a);
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
    fillAll("words.txt", a);
    a->print();
    emptyAll("output.txt", a);
    a->print();
}
void testIsBalanced(){
    cout << isBalanced("({(())})((([({})])))(((((()([{()}])(()))))))()") << endl;
    cout << isBalanced("({(())})((([({})])))(((((()([{()}])(())))))") << endl;
    cout << isBalanced("({(())})((([({})])))(((((()([{()}])(()))))))()])") << endl;
    cout << isBalanced("((()))") << endl;
    cout << isBalanced("{{}") << endl;
    cout << isBalanced("{[()]}") << endl;
}
int main(int argc, const char * argv[]){
    testIsBalanced();
    return 0;
}
