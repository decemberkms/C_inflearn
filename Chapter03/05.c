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
    printf("%d \n", 7/2); // truncation!!
  
    printf("%f\n", 9.0/4); // promotion . type casting
    printf("%f\n", 9.0/4.0);
    return 0;
}
