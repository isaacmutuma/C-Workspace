#ifndef PNUCSE_H //ensure the file is included only once in all files and run as a preprocessor directive
#define PNUCSE_H // if not defined, define it
#include <stdio.h>

//external variable declaration
extern int a; //global variables that can be accessed by other files but 
extern int c; //but not modified by them only in one file


//function prototype declaration
void Dosomething(int x); // these functions can be used in other 
void Display();//files but not modified by them only in one file where they are defined

//conditional compilation macro

#define DEBUG //enaables debug print statements in the code.Printing debug information can help track down issues during development.
//because it shows the values that variables hold at different stages of execution. in this case, it will enable the debug print statements in Dosomething function.



#endif // PNUCSE_H  // ends the conditional inclusion started at the top of the file.


/* 
Value 1: d (local variable in Dosomething)
Value 2: b (static global variable in Dosomething.c)
Value 3: e-1 (static local variable in Dosomething)
Value 4: c (external variable, printed in Display)
Value 5: a (external/global variable, printed in Display)
*/

