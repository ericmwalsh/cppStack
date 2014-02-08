::::::::::::::::::README::::::::::::::::::


Included files:
-Stack.h
-Stack.cpp (SOURCE CODE - implementation of ListNode and Stack classes)
-Queue.h
-Queue.cpp (SOURCE CODE - implemeentation of Queue classes)
-PCTimer.h
-fileListFunctions.cpp (SOURCE CODE - implementation of insertAllWords/findAllWords/removeAllWords located here)
-testStackAndQueue.cpp (misc test methods and int main() located here)

-makefile
-random.txt


The program inserts words from "random.txt" and then outputs them to various files depending on the data structure.

In order to compile, unzip and open a terminal in the directory.

Run make then run ./testmake

You should 
1- Have 4 new files in your directory:
	ArrayQueueOutput.txt
	ArrayStackOutput.txt
	LinkedQueueOutput.txt
	LinkedStackOutput.txt

2- Receive results like below...




ArrayStack:

Stack: Time to fillAll from random.txt: 0.023801 secs
Stack: Time to emptyAll to ArrayStackOutput.txt: 0.090783 secs

LinkedStack:

Stack: Time to fillAll from random.txt: 0.02384 secs
Stack: Time to emptyAll to LinkedStackOutput.txt: 0.084465 secs

ArrayQueue:

Stack: Time to fillAll from random.txt: 0.025849 secs
Stack: Time to emptyAll to ArrayQueueOutput.txt: 0.086592 secs

LinkedQueue:

Stack: Time to fillAll from random.txt: 0.023834 secs
Stack: Time to emptyAll to LinkedQueueOutput.txt: 0.080646 secs

isBalanced() using LinkedStack:

Is '({(())})((([({})])))(((((()([{()}])(()))))))()' balanced? : 1
Is '({(())})((([({})])))(((((()([{()}])(())))))' balanced? : 0
Is '({(())})((([({})])))(((((()([{()}])(()))))))()])' balanced? : 0
Is '((()))' balanced? : 1
Is '{{}' balanced? : 0
Is '{[()]}' balanced? : 1


ArrayStack errors:

Attempting to pop from an empty ArrayStack...
ContainerUnderflow Exception: Unable to execute pop() : ArrayStack is empty!
Attempting to top from an empty ArrayStack...
ContainerUnderflow Exception: Unable to execute top() : ArrayStack is empty!
Attempting to push to a full ArrayStack...
ContainerOverflow Exception: Unable to execute push(string s) : ArrayStack is full!

LinkedStack errors:

Attempting to pop from an empty LinkedStack...
ContainerUnderflow Exception: Unable to execute pop() : LinkedStack is empty!
Attempting to top from an empty Linkedtack...
ContainerUnderflow Exception: Unable to execute top() : LinkedStack is empty!

ArrayQueue errors:

Attempting to dequeue from an empty ArrayQueue...
ContainerUnderflow Exception: Unable to execute dequeue() : ArrayQueue is empty!
Attempting to front from an empty ArrayQueue...
ContainerUnderflow Exception: Unable to execute front() : ArrayQueue is empty!
Attempting to enqueue to a full ArrayQueue...
ContainerOverflow Exception: Unable to execute enqueue(string s) : ArrayQueue is full!

LinkedQueue errors:

Attempting to dequeue from an empty LinkedQueue...
ContainerUnderflow Exception: Unable to execute dequeue() : LinkedQueue is empty!
Attempting to front from an empty LinkedQueue...
ContainerUnderflow Exception: Unable to execute front() : LinkedQueue is empty!