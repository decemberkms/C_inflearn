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

    int arr[10];

    const int num = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < num; ++i)
        arr[i] = (i + 1) * 100;
    
    int* ptr = arr;

    printf("%p %p %p\n", ptr, arr, &arr[0]);

    // ptr += 2;

    printf("%p %p %p\n", ptr, arr + 2, &arr[2]);


    // Nte : arr += 2;// invalid

    printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);

    // int* ptr = NULL;
    // ptr = arr;

    for (int i = 0; i < num; ++ i)
    {
        printf("%d %d\n", *ptr++, arr[i]);
    }


    return 0; 
}

