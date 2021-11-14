#include <stdio.h> // getchar putchar
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h> // strlen(), strcmp()
#include <math.h>
#include <stdbool.h>
#include <ctype.h>  // character functions
#include <iso646.h>  // not used so often   -- and or not
#include <stdlib.h> //srand()   //malloc(), free()

int temp(int a)
{
    return 0;
}

int (*g(int a))(int)
{
    return temp;
}

int main()
{       

    /*
        * indicates a pointer
        () indicates a function
        [] indicatees an array
    */

    /*
        Deciphering complex declarations (KNK book)
        - always read declarations from inside out
        - when there's a choice, always flavour [] and () ver *.
    */

    int* ap[10];  // identifier ap is an array of pointers
    // first find identifier -> ap
    //bracket([]) is higher than pointer(*)
    // so this is an array. 
    // and after all this is anrray of pointer
    typedef int* pint;
    pint ap2[10];// this is easy to understand. array of 10 pointers

    // float* fp(float); // fp is a function that returns a pointer
    // fp is function 
    // fp has a arguments that's float and it returns float pointer

    typedef float* pfloat;
    pfloat fp(float);
    // easy to understand

    void (*pf)(int);
    /*
        void (*pf)(int);
             1             1. pointer to
                    2      2. function with int argument
        3                  3. returning void
    */

   int* (*x[10])(void);
    /*
        int* (*x[10])(void);
              1             1. x identifier -> something's array-> pointer's array
                     2      2. no argument ()
        3                   3. returning int pointer
    */

   // function cannot return an array
   // int f(int)[]; // wrong
   // but it can retrun a pointer to an array

//    int(*f(int))[];


    //function cannot return function -> but c++ is possible (only C)
    // it can return a pointer to a function

    int (*g(int))(int);



    return 0; 
}
