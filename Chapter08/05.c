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

#define MONTHS 12
#define NUM_YEAR 3
// 2D array
int main()
{   
    double year2016[MONTHS] = {-2, 1 ,2, 12, 14, 23, 24 ,34, 20, 24, 1, -10};
    double year2017[MONTHS] = {-1, 11 ,22, 22, 25, 33, 21 ,32, 30, 12, 2, -5};
    double year2018[MONTHS] = {2, 2 ,23, 32, 24, 13, 14 , 24, 10, 18, 4, -2};

    double arr_temp[NUM_YEAR][MONTHS];
    for (int i = 0; i < NUM_YEAR; ++i)
    {
        for (int j = 0; j < MONTHS; ++j)
            if (i == 0)
                arr_temp[i][j] = year2016[j];
            else if (i == 1)
                arr_temp[i][j] = year2017[j];
            else
                arr_temp[i][j] = year2018[j];            
    }


    for (int i = 0; i < NUM_YEAR; ++i)
    {   
        printf("Year %d: ", i);
        for (int j = 0; j < MONTHS; ++j)
            {  
                
                printf("%.1lf ", arr_temp[i][j]);
            }
        printf("\n");
    }


    return 0; 
}

