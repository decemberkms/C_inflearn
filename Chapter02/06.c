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
    
    printf("PI is %f\n", PI);
    printf("Largest int: %d\n", INT_MAX);
    printf("One byte in this system is %d bits\n", CHAR_BIT);
    printf("Smallest normal float %e\n", FLT_MIN);


    return 0;
}
