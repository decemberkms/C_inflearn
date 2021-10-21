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

long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{   
    int f1 = 10;

    printf("%d's factorial: %ld \n", f1,recursive_factorial(f1));
    printf("%d's factorial: %ld \n", f1, loop_factorial(f1));

    return 0; 
}

long recursive_factorial(int n)
{   
    if (n == 1)
    {
        return 1;
    }
    else
    {
         return n * recursive_factorial(n-1);
    }
}

long loop_factorial(int n)
{   
    long new_fact = 1;

    for (int i = 1; i <= n; ++i)
        new_fact *=  i;

    return new_fact;
}