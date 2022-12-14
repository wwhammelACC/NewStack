/*
 * Main Source Code File
 * 
 */

#include "main.h"

int main(int argc, char **argv) {
    // here for the rand_string() function
    // if you don't use it, get rid of this
    //srand(time(NULL));

    /* ***************************************************************
     * First get your arguments from the command line. Your program must
     * accept one and only one argument not including the program name
     * itself. That argument must be an integer. If anything else is entered
     * in any way, terminate the program with a suitable error message
     * telling the user how to use your program correctly.
     * 
     * Remember, you may not use more than one return, even in main()
     * and you may not use exit() or anything like that.
     * ***************************************************************/

    /* ***************************************************************
     * Use the number passed in from the command line and declare a stack
     * that uses that number as the size of the stack. NOTE: Make sure
     * your stack checks the number passed in to it. You cannot rely
     * on main checking the number first, each part of every program and
     * ADT is always responsible for it's own error checking. Main must
     * check the user gave it an int. The stack must check main()
     * gave it a good number. This is proper error checking, no part of
     * any program can assume it's caller is behaving correctly. To do this,
     * try passing -1 or 0 or some other "bad" number to the stack from
     * main and make sure your stack rejects it, or defaults to some
     * pre-defined default value. This will be tested during grading.
     * ***************************************************************/


    /* ***************************************************************
     * Throughly test your stack. You must perform an exhaustive series
     * of tests on your stack. Show all possible ways your stack can be used
     * and abused and prove that your stack can gracefully handle ALL cases.
     * You must use automated testing (no user input). First cover all
     * explicit cases which you can think of, then execute random operations.
     * When generating test data, use random ints for ids and random short
     * strings for string. There is a string generator made for you in the
     * functions module. You are free to use it or make your own.
     * ***************************************************************/

    /* ***************************************************************
     * Below is some sample code for the random string function. It's
     * only here to demonstrate the function. DELETE it once you study
     * it and understand it and can use it yourself in your code.
     * ***************************************************************/
    
    // make 20 random strings, store them, display them
//    std::string strtemp;
//    for(int i=0; i<20; i++){
//        rand_string(&strtemp);
//        std::cout << strtemp << std::endl;
//    }
    
    /* ***************************************************************
     * Your code will be tested by applying your stack to a custom main
     * designed to break your code. If it can be broken, you risk a
     * substantially reduced grade, up to and including a zero.
     * ***************************************************************/

    //argc is argument count, argv is argument vector
    // argv is an array of c-string pointers
    // atoi converts string to integers
    if(argc == 2){
        bool pos = is_positive(argv[1]); // tests that input is positive
        int size = atoi(argv[1]);
        if(size >= 2 && pos == true){
            // create stack
            int size = atoi(argv[1]);
            Stack stack(size);
            srand(time(NULL));

            cout << endl;
            cout << "Initial Testing of push, peek, pop and isEmpty" << endl;
            cout << endl;

            // initial push testing
            string strtemp;
            for(int i=1; i<size; i++) {
                rand_string(&strtemp); // generate random string
                if(strtemp.empty() || i<0){ // if string is empty or i less than 0
                    cout << "Error. Int for id must be greater than 0 and string information cannot be empty." << std::endl;
                    cout << "getting string " << strtemp << "and int id " << i << endl;
                }
                else if (stack.push(i, &strtemp)) { // other wise push int i and random string
                    cout << "Pushing: ";
                    cout << "Integer ID: " << i << " Info: " << strtemp << endl;
                    cout << "Pushed Element! " << endl;
                }
                else { // look up
                    cout << "Overflow Error! " << endl;
                }
                cout << std::endl;
            }
            cout << endl;

            // initial is empty testing
            if(stack.isEmpty()){
                cout << "Stack is empty " << endl;
            }else{
                cout << "Stack is NOT empty " << endl;
            }

            // initial peek testing
            Data *userData; // create variable pointer to empty Data struct
            userData = new Data; // userData is empty struct
            cout << endl;
            cout << "Testing peek method.." << endl;
            cout << "Peeking...." << endl;
            if(stack.peek(userData)){
                cout << "Integer ID " << userData->id << " Information " <<
                userData->information << endl;
            }else{
                cout << "Peek unsuccessful" << endl;
            }
            cout << endl;

            // initial pop testing
//            Data *userData2; // create variable pointer to empty Data struct
//            userData2 = new Data; // userData is empty struct i think
            for(int i; i<size; i++){
                Data *userData2; // create variable pointer to empty Data struct
                userData2 = new Data; // userData is empty struct
                cout << "Testing pop method.. " << endl;
                if(stack.pop(userData2)){
                    cout << "Pop successful! " << endl;
                }else{
                    cout << "Underflow Error! " << endl;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
