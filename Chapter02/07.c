#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>
#define PI 3.141592 // manifest (clear) constant or symbolic constant
// cannot change - constant

int main()
{   
    
    printf("%10i\n", 1234567);
    printf("%-10i\n", 1234567);
    printf("%+i %+i\n", 123, -123);
    printf("% i \n %i\n", 123, -123);
    printf("%X\n", 17);
    printf("%#X\n", 17);
    printf("%05i\n", 123);
    printf("%*i\n", 7, 456);

    printf("Precision\n");
    printf("%.3d\n", 1024);
    printf("%.5d\n", 1024);

    printf("%.3f\n", 123456.1234567);
    printf("%.3f\n", 123456.1235);

    printf("%10.3f\n", 123.45678);
    printf("%010.3f\n", 123.45678);

    printf("%.5s\n", "ABCDEFGH");
    printf("%.s\n", "ABCDEFGH");


    printf("\nLength\n");
    printf("%hhd %hd %d\n", 257, 257, 257);
    
    return 0;
}
