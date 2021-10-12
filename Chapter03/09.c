#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>

//modulus

int main()
{   
    // promotion   - no problem  small into big
    short s = 64;
    int i = s;

    float f = 3.14f;
    double d = f;

    // demotion   - truncation

    d = 1.25;

    f = 1.25;   // 1/2 's something
    f = 1.123;  // truncation error

    //ranking of types in operations
    // long doulbe > double > float
    // unsigned long long, long long
    // unsigned long, long
    // unsigned, int
    // short int, unsigned short int
    // signed char, char, unsigned char
    // bool
    d = f + 1.234; // cpu cannot operate between float and double
    // so f is coverted into double -> hihger ranking
    f = f + 1.234; // expresiton 1.234 double -> so it's also double.


    //casting operators/

    d = (double)3.14f; // c++ style static_cast
    i = 1.6 + 1.7;// =>3
    printf("%d\n", i);
    i = (int)1.6 + (int)1.7; // = > 2
    printf("%d\n", i);
    char c;
    f= i = c = 'A';
    printf("%c, %d, %f \n", c,i,f);







    return 0;
}
