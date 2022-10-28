/*
 * Your comment header here
 * modify this file as needed to complete the assignment
 */

// each cpp includes ONLY it's header directly
#include "stack.h"

/*
 * write all your stack methods here
 */

Stack::Stack(int userSize){
    cout << "constructor test line " << endl;
    top = -1;
    if (userSize >= DEFAULT) {
        size = userSize;
    } else {
        size = DEFAULT;
    }
    stack = new Data *[size];
}

Stack::~Stack(){
    cout << "destructor test line" << endl;
    for(int i=top; i>=0; i--){
        delete stack[i];
    }
    delete[] stack; // goes in destructor
}

// PUSH METHOD

bool Stack::push(int id, std::string *str){
    bool pushed = false;
    cout << "push test line " << endl;
    return pushed;
}

// POP METHOD
bool Stack::pop(Data *ref){
    bool popped = false;
    cout << "pop method test line " << endl;
    return popped;
}

// PEEK METHOD
bool Stack::peek(Data *ref){
    bool peeked = false;
    cout << "peek method test line " << endl;
    return peeked;
}

// ISEMPTY METHOD
//ISEMPTY METHOD/FUNCTION
bool Stack::isEmpty(){
    return top < 0;
}

