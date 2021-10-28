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


    //Array of string of diverse lengths example


    char* name[] = {"Aladin", "Jasmine", "Magic Carpet", "Genie"};

    const int n = sizeof(name) / sizeof(char*);

    for (int i = 0; i < n; ++i)
        printf("%s at %p \n", name[i], name[i]);
    printf("\n");

    char aname[][15] = {"Aladin", "Jasmine", "Magic Carpet", "Genie", "Jafer"};
    
    const int an = sizeof(aname) / sizeof(char[15]);

    for (int i = 0; i < an; ++i)
        printf("%s at %p \n", aname[i], &aname[i]);
    printf("\n");

    int array[5];
  
    /* If %p is new to you, you can use %d as well */
    printf("array=%p : &array=%p\n", array, &array); 

    printf("array+1 = %p : &array + 1 = %p", array+1, &array+1);
  


    return 0; 
}


