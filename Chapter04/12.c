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

// nested loop
int main()
{   
    char alphabet;
    int lines; 

    printf("Enter alpahbet: ");
    scanf("%c", &alphabet);
    printf("Enter line nuber: ");
    scanf("%d", &lines);
    // lines += 64;
    // for (int i = 0; i < lines ; ++i)
    // {
    //     for (int j = 65; j <= alphabet ; ++j)
    //         printf("%c ", j);
    //     printf("\n");
    // }


    // for (int i = 0; i < lines ; ++i)
    // {
    //     for (int j = 65; j <= alphabet + i ; ++j)
    //     {
    //         printf("%c ", j);
    //     }
    //     printf("\n");
    // }


    for (int i = 0; i < lines ; ++i)
    {
        for (int j = 65; j <= alphabet ; ++j)
            printf("%c ", j);
        printf("\n");
    }




    return 0; 
}











