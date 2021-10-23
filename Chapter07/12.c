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


// coding style for pointer

int main()
{   

    // int a = 1234;;
    // printf("Value: %d, Address: %p \n", a, &a);


    int *ptr;
    printf("Value: %d, Address: %p", *ptr, ptr);

    printf("\n");

    int* safer_ptr = NULL; // nullptr C++
    int a = 123;
    safer_ptr = &a;

    if (a % 2 ==0)
        safer_ptr = &a;

    if (safer_ptr != NULL)
        printf("%p\n", safer_ptr);
    
    if (safer_ptr != NULL)
        printf("%d\n", *safer_ptr);
    



    return 0; 
}

