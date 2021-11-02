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

// scope linkage duration
/*

    Storage duration
*/

void count()
{
    int ct = 0;
    printf("count = %d\n", ct);
    ct++;
}

void static_count()
{
    static int ct = 0;
    printf("count = %d\n", ct); 
    ct++;
}

int main()
{   
    count();
    count();
    static_count();
    static_count();

    return 0; 
}


