#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>

int main()
{
    float f = 123.456f;
    double d = 123.456;

    float f2 = 123.456f;
    double d2 = 123.456f;

    int i = 3;
    float f3 = 3.f;
    double d3 = 3.;

    float f4 = 1.234e10f;

    float f5 = 0x1.1p1; // a = p
    double d5 = 1.0625e0;
    
    printf("%f %F %e %E\n", f, f, f, f);
    printf("%f %F %e %E\n", d, d, d, d);
    printf("%a %A\n", f5, f5); // hexl decimal print
    printf("%a %A\n", d5, d5);      
    
    return 0;
}
