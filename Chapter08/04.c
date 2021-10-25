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

// 2D array
int main()
{   
    int arr[2][3] = {{1,2,3},
                     {4,5,6}};

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    } // this is faster than arr[j][i]    
    // the order of elements and order of reading -> should be the same
    // then fast


    int *ptr = &arr[0][0];  // anyway it's a 1D array! (intrinsically)
    for (int k = 0; k < 6; ++k)
        printf("%d", ptr[k]);
    printf("\n");
    printf("%zd \n", sizeof(*ptr));
    // int *ptr_a;
    // printf("%p \n", ptr_a);
    // printf("%zd \n", sizeof(ptr_a));


    printf("%zd %zd \n", sizeof(arr), sizeof(arr[0]));
        // 4*6 24,   4*3 12

    printf("\n\n");
    
    int arr_3d[2][3][4] = {
                            {
                                {000, 001, 002, 003},
                                {010, 011, 012, 013},
                                {020, 021, 022, 023},
                            },
                            {
                                {100, 101, 102, 103},
                                {110, 111, 112, 113},
                                {120, 121, 122, 123},
                            }
                        };

    for (int k = 0; k < 2; ++k)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int i = 0; i < 4; ++i)
                printf("%d ", arr_3d[k][j][i]);
            printf("\n");
        }
        printf("\n");
    }

    return 0; 
}

