#include "pnucse.h"

// global variable declaration
int a=0; //global variables in the .h file but can only be modified in this file

int main(){ // main function that enables user to input 3 numbers 
    //and calls Dosomething function for each number and
    // finally calls Display function to show the values of global variables a and c.

    int i,j; // local variable declaration defined in main function 

    for(i=0;i<3;i++) // as long as i is less than 3, increment i by 1 i is 0,1,2 
    {
        printf("Enter number:"); // as long i is less than 3, prompt user to enter a number
        scanf("%d",&j); // read the input number and store it in variable j
        Dosomething(j);// once the number is read it is paased to Dosomething function
    }

    Display(); // after the loop ends,
    // call Display function to show values of a and c thats why  a and c are printed only once
    
    return 0;
}

//