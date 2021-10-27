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

// double pointer

int main()
{   
    // Two of 1D array

    // int arr0[3] = {1, 2, 3};
    // int arr1[3] = {4, 5, 6};

    // int* parr[2] = { arr0, arr1};

    // for (int j = 0; j < 2; ++j)
    // {
    //     for (int i = 0; i < 3; ++i)
    //         printf("%d(==%d), %d ", parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
    //     printf("\n");
    // }
    // printf("\n");

    // // 2D array

    // int arr[2][3] = { {1, 2, 3}, {4, 5, 6}};

    // int *parr0 = arr[0];
    // int *parr1 = arr[1];

    // for (int i = 0; i < 3; ++i)
    //     printf("%d ", parr0[i]);
    // printf("\n");
    
    // for (int i = 0; i < 3; ++i)
    //     printf("%d ", parr1[i]);
    // printf("\n");

    //arrays of pointers 

    // int arr[2][3] = { {1, 2, 3}, {4, 5, 6}};

    // int *parr[2];
    // parr[0] = arr[0];
    // parr[1] = arr[1];

    // for (int j = 0; j < 2; ++j)
    // {
    //     for (int i = 0; i < 3; ++i)
    //         printf("%d(==%d), %d ", parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
    //     printf("\n");
    // }
    // printf("\n");



    // printf("%p\n", &parr[0]);
    // printf("%p\n", parr[0]);
    // printf("%p\n", arr);
    // printf("%p\n", &arr[0]);
    // printf("%p\n", arr[0]);
    // printf("%p\n", &arr[0][0]);


    return 0; 
}


