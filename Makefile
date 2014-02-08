testmake: Stack.cpp Queue.cpp fileListFunctions.cpp testStackAndQueue.cpp
	g++ Stack.cpp Queue.cpp fileListFunctions.cpp testStackAndQueue.cpp -o testmake -I.