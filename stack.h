/*
 * Stack Header
 *
 */

#ifndef STACK_H
#define STACK_H


#include "data.h"
#include <iostream>     /* cout, endl */
#include <string>     /* string */

#define DEFAULT 2

using std::cout;
using std::endl;
using std::string;

class Stack {

public:

    /* 
     * public method prototypes
     * this includes you constructor and destructor
     */

    //constructor
    Stack(int);
    //destructor
    ~Stack();
    
    bool push(int, string*); // pushing integers and strings
    bool peek(Data*); // looking at what's in stack
    bool pop(Data*); // removing from stack
    bool isEmpty();

private:

    /* 
     * private method prototypes
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
