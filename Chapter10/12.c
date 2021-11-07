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
#include <stdlib.h> //srand()   //malloc(), free()
#include <time.h> // time()


int main()
{   
    /* 
        One variable
    */
    // int* ptr = NULL;

    // ptr = (int*)malloc(sizeof(int) * 1);
    // if (!ptr) exit(1);

    // *ptr = 1024 * 3;
    // printf("%d \n", *ptr);
    
    // free(ptr);
    // ptr = NULL;
    // you can use dynamic allocation for one varialbe like this
    // but it's not worth it. 

    /* 
        1D variable
    */

    // int n = 3;
    // int* ptr = (int*)malloc(sizeof(int) * n); // ptr = first address
    // if (!ptr) exit(1);

    // ptr[0] = 123;
    // *(ptr + 1) = 456;
    // *(ptr + 2) = 789;

    // free(ptr);
    // ptr = NULL;

    /* 
        2D variable
    */

    int row = 3, col =2;
    int (*ptr2d)[col] = (int(*)[col])malloc(sizeof(int) * row * col);
    // single pointer to an array of int

    if (!ptr2d) exit(1);

    for (int r = 0; r < row; ++r)
        for (int c = 0; c < col; ++c)
            ptr2d[r][c] = c + col * r;

    for (int r = 0; r < row; ++r)
    {
        for (int c = 0; c < col; ++c)
            printf("%d ", ptr2d[r][c]);
        printf("\n");
    }

    // how to use it when VLA doesn't work

    /*
    row = 3 col =2
    (r,c)
    2D
    (0,0) (0,1)
    (1,0) (1,1)
    (2,0) (2,1)
    
    1D
    (0,0) (0,1) (1,0) (1,1) (2,0) (2,1)
    0     1      2     3     4     5 = c + col * r
    */

   

    return 0; 
}
