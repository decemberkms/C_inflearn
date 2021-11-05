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

void count()
{
    int ct = 0;
    printf("count = %d %lld\n", ct, (long long)&ct);
    ct++;
    // this ct is gone after this function so error!
    
    // return &ct;
}

int* static_count()
{
    static int ct = 0; // initialised only once 
    printf("static count = %d %lld\n", ct, (long long)&ct);
    ct++;

    return &ct;
}

// int func(static int i)  -- error! 
// {
// new stack frame!
// }

void counter_caller()
{
    count();
}

void static_counter_caller()
{
    static_count();
}


int main()
{   
    count();
    count();
    counter_caller();
    static_count();
    static_count();
    static_counter_caller();

    return 0; 
}
