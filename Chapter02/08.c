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
    float   n1 = 3.14;
    double  n2 = 1.2345;
    int     n3 = 1024;

    printf("Size of n1: %lu\n", sizeof(n1));
    printf("Size of n1: %lu\n", sizeof(n2));
    printf("Size of n1: %lu\n", sizeof(n3));

  
    
    return 0;
}
