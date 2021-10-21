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

// binary

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);

int main()
{   

    unsigned long num = 10;

    print_binary_loop(num);
    print_binary(num);
    return 0; 
}

void print_binary_loop(unsigned long n)
{

    while(1)
    {
        int quotient = n / 2;
        int remainder = n % 2;

        printf("%d", remainder);

        n = quotient;

        if (n == 0) break;
    }    

    printf("\n");

}

void print_binary(unsigned long n)
{

    int remainder = n % 2;

    if (n >= 2)
        print_binary(n / 2);
    
    printf("%d", remainder);

    printf("\n");
}