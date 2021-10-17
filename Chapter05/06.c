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

#define PERIOD '.'

int main()
{   
/*
    logical operators

    &&  and
    ||  or
    !  not 
*/

    // bool test1 = 3 > 2 || 5 > 6;
    // bool test2 = 3 > 2 && 5 > 6;   3 > 2 and 5 > 6 -- from  iso646
    // bool test3 = !(5 > 6);

    // printf("%d %d %d\n", test1, test2, test3);


    // char ch;
    // int count = 0;
    
    // while ((ch = getchar()) != PERIOD)
    // {
    //     if ((ch != '\n') && (ch != ' '))
    //     {
    //         count++;
    //     }
    // }

    // printf("%d", count);

    // short - circuit evaluation

    // int temp = (1 + 2) * (3 + 4);

    // printf("Before: %d\n0", temp);

    // if (temp == 0 && (++temp == 1024)) // left one is not going to be run
    // {

    // }

    // printf("Before: %d\n0", temp);

    // int x = 1, y = 2;
    // if (x++ > 0 && x + y == 4)  // || and && are sequence point - the expressions are run before the point!
    //     printf("%d %d\n", x, y);

    /* Range */

    for (int i = 0; i < 100; ++i)
        if (i >= 10 && i <= 20)
            printf("%d ", i);


    // if (10 <= i <= 20)  ---> if((10 <= i) <= 20)



    return 0; 
}









