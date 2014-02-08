//
//  fileListFunctions.cpp
//
//
//  Created by Eric Walsh on 1/30/14.
//
//

#include "PCTimer.h"

void fillAll(char * fileName, Stack * inp){
    PCTimer t;
    t.start();
    std::ifstream infile(fileName);
    for( std::string line; getline( infile, line ); ) inp->push(line);
    infile.close();
    t.stop();
    cout << "Stack: Time to fillAll from " << fileName << ": " << t.elapsedTime() << " secs" << endl;
}

void emptyAll(char * fileName, Stack * inp){
    PCTimer t;
    t.start();
    std:ofstream outfile(fileName);
    while(!inp->isEmpty()) outfile << inp->pop() << endl;
    outfile.close();
    t.stop();
    cout << "Stack: Time to emptyAll to " << fileName << ": " << t.elapsedTime() << " secs" << endl;
}
bool isBalanced(string s) // Big-O is O(n)
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

/**
void insertAllWords(char * fileName, SortedLinkedList * inp){
    PCTimer t;
    t.start();
    std::ifstream infile(fileName);
    for( std::string line; getline( infile, line ); ){
        //this line converts all words into lowercase for easier conversion using the '>' symbol
        std::transform(line.begin(), line.end(), line.begin(), ::tolower);
        inp->insert(line);
    }
    infile.close();
    t.stop();
    cout << "SortedLinkedList: Time to insertAllWords from " << fileName << ": " << t.elapsedTime() << " secs" << endl;
}
bool findAllWords(char * fileName, SortedLinkedList * inp){
    PCTimer t;
    t.start();
    std::ifstream infile(fileName);
    for( std::string line; getline( infile, line ); ){
        //this line converts all words into lowercase for easier conversion using the '>' symbol
        std::transform(line.begin(), line.end(), line.begin(), ::tolower);
        if(!inp->find(line)) return false;
    }
    infile.close();
    t.stop();
    cout << "SortedLinkedList: Time to findAllWords from " << fileName << ": " << t.elapsedTime() << " secs" << endl;
    return true;
}
void removeAllWords(char * fileName, SortedLinkedList * inp){
    PCTimer t;
    t.start();
    std::ifstream infile(fileName);
    for( std::string line; getline( infile, line ); ){
        //this line converts all words into lowercase for easier conversion using the '>' symbol
        std::transform(line.begin(), line.end(), line.begin(), ::tolower);
        inp->remove(line);
    }
    infile.close();
    t.stop();
    cout << "SortedLinkedList: Time to removeAllWords from " << fileName << ": " << t.elapsedTime() << " secs" << endl;
}
**/
