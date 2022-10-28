/*
 * Your comment header here
 * modify this file as needed to complete the assignment
 */

#ifndef STACK_H
#define STACK_H

/*
 * there are no other includes here because they are not needed.
 * if you do need other things included, they would go here
 */

#include "data.h"
#include <iostream>     /* cout, endl */

#define DEFAULT 2

using std::cout;
using std::endl;

class Stack {

public:

    /* 
     * write all your public method prototypes here
     * this includes you constructor and destructor
     */
    //constructor
    Stack(int);
    //destructor
    ~Stack();
    
    bool push(int, string*); // pushing intergers and strings
    bool peek(Data*); // looking whats in stack
    bool pop(Data*); // removing from stack
    bool isEmpty();

private:

    /* 
     * write all your private method prototypes here
     */

    // these are the only attributes you need.
    // do not modify them or add any other attributes
    int top;
    int size;
    Data **stack;
    // notice stack is a pointer to a pointer. That means if you do
    // a single array allocation, you will get an array of pointers
};

#endif //STACK_H
