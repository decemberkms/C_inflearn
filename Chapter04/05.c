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
#include <stdbool.h>


int main()
{   
    _Bool boolean_true = (2 > 1);
    _Bool boolean_false = (1 > 2);

    printf("True is %d \n", boolean_true);
    printf("Flase is %d \n", boolean_false);

    printf(boolean_true ? "true": "flase");
    printf(boolean_false ? "true": "flase");

    bool bt = true;
    bool bf = false;

    printf("\n");
    printf("True is %d \n", bt);
    printf("False is %d \n", bf);

    return 0;
}











