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
}

Stack::~Stack(){
    cout << "destructor test line" << endl;
}

// PUSH METHOD

bool Stack::push(int id, std::string *str){

    cout << "push test line " << endl;
}

// POP METHOD
bool Stack::pop(Data *ref){

    cout << "pop method test line " << endl;
}

// PEEK METHOD
bool Stack::peek(Data *ref){

    cout << "peek method test line " << endl;
}

// ISEMPTY METHOD
//ISEMPTY METHOD/FUNCTION
bool Stack::isEmpty(){
    return top < 0;
}

