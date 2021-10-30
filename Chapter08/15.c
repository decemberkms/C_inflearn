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

#define ROWS 3
#define COLS 4 // symbolic constant
// variable -length array
    // VLA
int sum2d_4(int row, int col, int ar[row][col]);

int main()
{   
    int n;

    scanf("%d", &n);
    float my_arr[n]; // cannot change the length after declaration
    // just ust dynamic array

    for (int i = 0; i < n; ++i)
        my_arr[i] = (float)i;
    
    for (int i = 0; i < n; ++i)
        printf("%f\n", my_arr[i]);

   int data[ROWS][COLS] = {
                            {1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10 ,11 ,12}
                                        };

    printf("%d\n", sum2d_4(ROWS, COLS, data));

    return 0; 
}

int sum2d_4(int row, int col, int ar[row][col]) // ar -> VLA
{
    int r,c,tot =0;
    for (r = 0; r < row; ++r)
        for (c = 0; c < row; ++c)
            tot += ar[r][c];
    return tot;
}
