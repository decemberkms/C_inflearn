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


int main()
{   
    const int password = 337;
    int input;

    do   // just run first and then check the condition
    {
        printf("Enter a number: ");
        scanf("%d", &input); 
    }
    while(input != password);

    // printf("Enter a number: ");
    // scanf("%d", &input);   
    
    // while(input != password)
    // {
    //     printf("Enter a number: ");
    //     scanf("%d", &input); 
    // }


    printf("Good!");


    return 0; 
}











