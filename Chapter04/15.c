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

int power(int base, int exp); // prototype


int main()
{   
    int base, exp;
    
    while (scanf("%d %d", &base, &exp) == 2)
    {
        printf("Result: %d\n",  power(base, exp));
    }

    return 0; 
}

int power(int base, int exp)
{
    int i, result;
    result = 1;
    for (i = 0; i < exp; ++i)
    {
        result *= base;
    }
    return result;
}







