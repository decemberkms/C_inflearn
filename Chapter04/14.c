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
#define SIZE 3

// for loop with array
int main()
{   
    // int my_arr[SIZE];

    // for (int i = 0; i < SIZE; ++i)
    //     my_arr[i] = i * i;

    // for (int i = 0; i < SIZE; ++i)
    //     printf("%d ", my_arr[i]);


    int my_numbers[SIZE];
    int sum = 0;
    int i;
    printf("Enter %d numbers: ", SIZE);
    for (i = 0; i < SIZE; ++i)
    {
        scanf("%d", &my_numbers[i]);
    }
 
    for (i = 0; i < SIZE; ++i)
    {
        sum += my_numbers[i];
    }

    printf("%d \n", sum);
    printf("%d", sum/SIZE);

  
    return 0; 
}











