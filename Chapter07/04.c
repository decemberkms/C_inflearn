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

// recursion

void my_func(int n);

int main()
{   

    my_func(1);

    return 0; 
}

void my_func(int n)
{
    printf("Level %d, address of variable n = %d \n", n, (int)(intptr_t)&n);

    if (n < 4)
        my_func(n + 1);
    

    printf("Level %d, address of variable n = %d \n", n, (int)(intptr_t)&n);

}
