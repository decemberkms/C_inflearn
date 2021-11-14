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


// type def
// -give symbolic names (aliases) to type
// - does not create new types
int main()
{       
    typedef unsigned char BYTE;

    BYTE x, y[10] = {0,}, *z = &x;
    // size_t -> change depending on the x86 or x64
    // portable programmming
    // 
    {
        typedef unsigned char BYTE; // type def has alos a scope
    }

    // time_t -> since 1970 Jan 1  time in seconds

    typedef char* STRING;

    STRING name = "Minsung Kim";

    /*
        - typedef interpreation is performed by the compier, not preprocessor
        - more flexible than #define -> macro just copy and paste 

        #define STRING char*

        STRING name, sign;
        char * name, sign; // note the type of sign
    */

   typedef struct complex1 {
       float real;
       float imag;
   } COMPLEX; // typedef struc complex COMPLEX

    return 0; 
}
