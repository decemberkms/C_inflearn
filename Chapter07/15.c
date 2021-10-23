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

void swap(int* a, int* b)
{
    printf("%p %p \n", a, b);

    int temp = *a; // dereferencing
    *a = *b;
    *b = temp;
}


int main()
{   

    int a = 123;
    int b = 456;

    // int c;
    // c = a;
    // a = b;
    // b = c;

    printf("%p %p \n", &a, &b);

    swap(&a,&b);

    printf("%d %d \n", a ,b);



    return 0; 
}

