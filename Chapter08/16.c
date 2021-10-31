#include <stdio.h> // getchar putchar
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>  // character functions
#include <iso646.h>  // not used so often   -- and or not
#include <stdlib.h>

#define ROWS 3
#define COLS 4 // symbolic constant

int main()
{   
    //compound literal - literals are constants that are not symbolic

    (int[2]) { 3, 4};
    // int c[2] = (int[2]) { 3, 4} << error

    // you can put this compound literal into a function



    return 0; 
}
