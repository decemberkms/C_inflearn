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

int int_max(int i, int j)
{
    
    int m;
    m = i > j ? i : j;
    return m;
}

int main()
{   

    int a = 1;
    int* a_ptr = &a;
    printf("%p", a_ptr);
    a = int_max(1,2);

    return 0; 
}

