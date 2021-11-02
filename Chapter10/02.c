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

// scope linkage duration
/*
 Variable scopes (visibility)
 -block, function, function prototype, file

*/
// block scope!

void f1(int, double); // func prototype!

double func_block(double d)
{
    double p = 0.0;

    int i;
    for (i = 0; i < 10; ++i) // C99
    {
        double q= d * i;
        p *= q;

        if (i == 5)
            goto hello;
    }

hello: // this is an exception! can be defined after using
    printf("Hello, World!");

    return p;
}

int main()
{   
    func_block(1.0);
    return 0; 
}

void f1(int hello, double world)
{

}
