#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0


int main()
{   
    int tv, fv;

    tv = (1 < 2);
    fv = (1 > 2);

    printf("True is %d\n", tv);
    printf("False is %d\n", fv);

    int i = 5;
    while (i)
        printf("%d is true\n", i--);
    printf("%d is false\n", i);  // 0 is false and the others are true
    

    return 0;
}











