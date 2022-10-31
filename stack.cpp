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

bool Stack::push(int id, string *str){  // An asterisk is used in C++ to declare a pointer. Pointers allow you to refer directly to values
    bool push = false;
    cout << "push test line " << endl;
    // if id > 0 and string is not empty
    // declare pointer for ADT and allocate
    //C++ String empty(). This function checks whether the string is empty or not
    if(top < (size - 1)){
        if(id > 0 and !str->empty()){
            cout << "allocate ADT test line " << endl;
            // pointer to data struct
            Data *myData;
            //allocate data structure
            myData = new Data;
            myData->id = id;
            myData->information = *str;
            stack[++top] = myData;
            push = true;
        }
    }
    return push;
}

// POP METHOD
bool Stack::pop(Data *ref){
    bool popped = false;
    cout << "pop method test line " << endl;
    return popped;
}

// PEEK METHOD
bool Stack::peek(Data *ref){
    bool peek = false;
    cout << "peek method test line " << endl;
    if(!isEmpty()){     // if not empty
        //getting info from top of stack and putting it in data struct
        ref->id = stack[top]->id;
        ref->information = stack[top]->information;
        //'return data to caller'
        peek = true;
    }else{
        //fill passed data struct with -1, empty string
        ref->id = -1;
        ref->information = "";
    }
    return peek;
}

// ISEMPTY METHOD
//ISEMPTY METHOD/FUNCTION
bool Stack::isEmpty(){
    cout << "isEmpty test line " << endl;
    return top < 0;
}

