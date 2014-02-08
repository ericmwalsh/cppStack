//
//  fileListFunctions.cpp
//
//
//  Created by Eric Walsh on 1/30/14.
//
//

#include "PCTimer.h"

void fillAll(char * fileName, Stack * inp){ // Big-O is O(n)
    PCTimer t;
    t.start();
    std::ifstream infile(fileName);
    for( std::string line; getline( infile, line ); ) inp->push(line);
    infile.close();
    t.stop();
    cout << "Stack: Time to fillAll from " << fileName << ": " << t.elapsedTime() << " secs" << endl;
}

void emptyAll(char * fileName, Stack * inp){ // Big-O is O(n)
    PCTimer t;
    t.start();
    std:ofstream outfile(fileName);
    while(!inp->isEmpty()) outfile << inp->pop() << endl;
    outfile.close();
    t.stop();
    cout << "Stack: Time to emptyAll to " << fileName << ": " << t.elapsedTime() << " secs" << endl;
}
bool isBalanced(string s) 
{
    LinkedStack * a = new LinkedStack();
    for(int i=0; i<s.length(); i++)
    {
        string sub = s.substr(i,1);
        if(sub=="(" || sub == "{" || sub == "[") a->push(sub);
        else if(sub == ")")
        {
            if(a->isEmpty()||a->pop()!="(") return false;
        }
        else if(sub=="}")
        {
            if(a->isEmpty()||a->pop()!="{") return false;
        }
        else
        {
            if(a->isEmpty()||a->pop()!="[") return false;
        }
    }
    return a->isEmpty();
}
void fillAll(char * fileName, Queue * inp){ // Big-O is O(n)
    PCTimer t;
    t.start();
    std::ifstream infile(fileName);
    for( std::string line; getline( infile, line ); ) inp->enqueue(line);
    infile.close();
    t.stop();
    cout << "Stack: Time to fillAll from " << fileName << ": " << t.elapsedTime() << " secs" << endl;
}

void emptyAll(char * fileName, Queue * inp){ // Big-O is O(n)
    PCTimer t;
    t.start();
    std:ofstream outfile(fileName);
    while(!inp->isEmpty()) outfile << inp->dequeue() << endl;
    outfile.close();
    t.stop();
    cout << "Stack: Time to emptyAll to " << fileName << ": " << t.elapsedTime() << " secs" << endl;
}