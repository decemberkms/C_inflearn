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

#define PERIOD '.'

int main()
{   
    int temp;
    temp = true ? 1024: 7; //ternary opertor
    printf("%d\n", temp);

    int number;
    scanf("%d", &number);

    const bool is_even = (number % 2  == 0) ?  printf("Even") :  printf("Odd");   // normally ()

    // if (number % 2 == 0)
    //     is_even = true;
    // else
    //     is_even = false;
    
    // if (is_even)
    //     printf("Even");
    // else
    //     printf("Odd");

    return 0; 
}









