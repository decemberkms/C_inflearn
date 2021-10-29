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
    // float arr2d[2][4] = { {1.0f, 2.0f, 3.f, 4.f}, {5.f, 6.f, 7.f, 8.f} };
    
    // printf("%ld\n", (long unsigned)arr2d);
    // printf("%ld\n", (long unsigned)arr2d[0]);  
    // printf("%ld\n", (long unsigned)& arr2d[0][0]);
    // printf("\n");

    // printf("%ld\n", (long unsigned)* arr2d);
    // printf("%ld\n", (long unsigned)& arr2d[0]);  
    // printf("%ld\n", (long unsigned)& arr2d[0][0]);
    // printf("%f %f \n", arr2d[0][0], **arr2d);
    // printf("\n");

    // printf("%ld\n", (long unsigned)(arr2d + 1));
    // printf("%ld\n", (long unsigned)**(arr2d + 1));
    // printf("%ld\n", (long unsigned)(&arr2d[1]));
    // printf("%ld\n", (long unsigned)(arr2d[1]));
    // printf("%ld\n", (long unsigned)(*(arr2d + 1)));
    // printf("%ld\n", (long unsigned)(&arr2d[0] + 1));
    // printf("%ld\n", (long unsigned)(&arr2d[1][0]));
    // printf("\n");

    // printf("%f\n", *(*(arr2d + 1) + 2));
    // printf("\n");

    // for (int j = 0; j < 2; ++j)
    // {
    //     printf("[%d] = %ld, %ld\n", j, (long unsigned)(arr2d[j]), (long unsigned)* (arr2d + j) );
        
    //     for (int i = 0; i < 4; ++i)
    //     {
    //         printf("[%d][%d] = %f, %f \n", j, i, arr2d[j][i], *(*(arr2d + j) + i));

    //         *(*(arr2d + j) + i) += 1.0f; // arr2d[j][i] += 1.0f;
            
    //     }
    // }


    float arr2d[2][4] = { {1.0f, 2.0f, 3.f, 4.f}, {5.f, 6.f, 7.f, 8.f} };

    float (*pa)[4]; // asingle pointer to an array of floats
    float* ap[2]; // an array of two pointers to float

    printf("%zu\n", sizeof pa);
    printf("%zu\n", sizeof ap);
    printf("\n");

    pa = arr2d;
    // pa[0] = arr2d[0]; // error
    // pa[1] = arr2d[1];  // error
    
    // ap = arr2d; //eror

    ap[0] = arr2d[0];
    ap[1] = arr2d[1];


    return 0; 
}


