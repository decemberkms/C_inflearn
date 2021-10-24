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

#define MONTHS 12 // macro, symbolic constant

int main()
{   
    int high[MONTHS] = {2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4};

    for (int i = 0; i < MONTHS; ++i)
        printf("%d ", high[i]);
    printf("\n");

    float avg = 0.0f;
    for (int i =0; i < MONTHS; ++i)
        avg += high[i];
        
    printf("Average = %f \n", avg / (float)MONTHS);

    high[0]= 1;
    high[1] = 2;
    // high = {1,2,3,4,~~} after declaration, this is not possible. only when initialization.


    //Address

    printf("%p %p \n", high, &high[0]); // array's address is the first address of arraay


    for (int i = 0; i < MONTHS; ++i)
        printf("%p \n", &high[i]);
    printf("\n");

    // Error
    // high[12];
    // high[-1];   checking makes slower/ so just be careful!


    // const int temp = 0;
    // const int low[12] =  -> elements of array can not be cahgned.

    static int not_init[4];  // no initialization -> trash values
    for (int i = 0; i < 4; ++i)
        printf("%d \n", not_init[i]);

    // storage class < if put statis -> it makes array elements 0

    int insuff[4] = {2, 4}; // the rest will be o. partial init.
    for (int i = 0; i < 4; ++i)
        printf("%d \n", insuff[i]);

    // int over[2] ={1,2,3,4};

    const int power_of_twos[] = {1, 2, 3, 4, 5, 6, 7};
    printf("%ld\n", sizeof(power_of_twos));
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(power_of_twos[0]));
    printf("Number of elements: %ld\n", sizeof power_of_twos / sizeof(int));

    // the thing above doesnot work in dynamic allocation.

    // designated init.

    int days[MONTHS] = {31 ,28, [4] = 31, 30, 31, [1] = 29};

    for (int i = 0; i < MONTHS; ++i)
        printf("%d ", days[i]);

    // array size

    int arr1[MONTHS];
    // int arr2[0]; // not work
    float arr3[3*4 + 1]; // it works because 3*4 +1 is conducted during compile time

    // int n = 8;   variable -length array - not working in Visual studio 
    // float arr9[n];  VLA; can be done or not depending on compiler










    return 0; 
}

