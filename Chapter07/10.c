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


int main()
{   
    int a, b;

    a = 123;

    int *a_ptr;

    a_ptr = &a;

    printf("%d %d %p \n",a, *a_ptr, a_ptr);
    
    *a_ptr = 456;

    printf("%d %d %p \n",a, *a_ptr, a_ptr);
    
    // b = a_ptr;  not a good idea to use. 
    b = *a_ptr; // here b is assigned by the value.

    printf("%d \n", b);

    *a_ptr = 789;

    printf("%d\n", b);
    printf("%d %d %p\n", a, *a_ptr, a_ptr);


    b = 12;

    printf("%d\n", b);
    printf("%d %d %p \n", a, *a_ptr, a_ptr);

    a = 1004;
    printf("%d %d %p %d\n", a, *a_ptr, a_ptr, b);

    return 0; 
}

