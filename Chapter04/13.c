#include <stdio.h>
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

#define NUM_DAYS 365

// runtime error & array
int main()
{   
    // char my_chars[] = "Hello, World!";

    // int daily_temperature[NUM_DAYS];
    // double stock_prices_history[NUM_DAYS];

    // printf("%zd \n", sizeof(stock_prices_history));
    // printf("%zd \n", sizeof(double) * NUM_DAYS);
    // printf("%zd \n", sizeof(stock_prices_history[0]));


    int my_numbers[5];

    my_numbers[0] = 1;
    my_numbers[1] = 3;
    my_numbers[2] = 4;
    my_numbers[3] = 2;
    my_numbers[4] = 1024;

    // scanf("%d", &my_numbers[0]);  the same as below
    // scanf("%d", my_numbers);
    
    printf("%d\n", my_numbers[0]);
    printf("%d\n", my_numbers[1]);
    printf("%d\n", my_numbers[2]);
    printf("%d\n", my_numbers[3]);
    printf("%d\n", my_numbers[4]);


    my_numbers[6] = 123; // runtime error  vs compile time error
    // my_numbers = 123; // compile error


    return 0; 
}











