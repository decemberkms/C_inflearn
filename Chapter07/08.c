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


int fibonacci(int number);

int main()
{   

    for (int count = 1; count < 13; ++ count)
        printf("%d \n", fibonacci(count));

    return 0; 
}

int fibonacci(int number)
{
    if (number < 2)
    {
        return 1;
    } 
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}