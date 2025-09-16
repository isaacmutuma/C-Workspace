#include "pnucse.h" 

//From this file the outputs of values 1,2,3 are generated

//static global variable (file scope only)
static int b = 10000;

//external variable definition
int c = 0;


//function to add score
void Dosomething(int x) {
    //local variable
    int d=0; //int d is int x which came from int j which came from user input

    //static local variable
     static int e=5; 
    
    d+=x; // d is updated withbthe value x that came from j which came from user input
    b++; //b is incremented by 1 each time the function is called
    e++; //e is incremented by 1 each time the function is called
    
    c=x*2; //only printed  after the loop ends in Display function with x being th last user input value
    a=503;
   

    // Debug print (only compiles if DEBUG is defined)
    #ifdef DEBUG // this line checks if DEBUG is defined and 
    //if it is, the code between #ifdef and #endif is included in the compilation in both Dosomething.c and main.c 
    //and ensures .h file is included only once in all files and run as a preprocessor directive
    printf("[DEBUG] DoSomething: Value1=%d, Value2=%d, Value3=%d\n", d, b, (e-1)); // e is incremented after being printed thats why e-1 is printed as value 3
    //On the first call, e starts at 5. 
    //The code increments e with e++, so if you print e-1, you see 5 (the original value). 
    //If you print just e, you see 6 (after incrementing).
    //On each subsequent call, e-1 shows the value before incrementing, while e shows the value after.
    #endif
    //it helps you see detailed information
    //about the program’s internal state at specific points.
     //This makes it easier to track values and understand how your code is working during execution,
     //which is useful for troubleshooting and verifying logic.
}