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

/*
    Macro
    - An instruction that represents a sequence of instructionin
*/


// hash # define

#define SAY_HELLO printf("Hello, World!");


int main()
{    
    // object like macros vs. function like macros
    // #define ONE 1
    // #define SQUARE(X) X*X
    // manifest == clear 
    // manifest == list
    
    
    //macro expansion
    SAY_HELLO
     
    return 0; 
}