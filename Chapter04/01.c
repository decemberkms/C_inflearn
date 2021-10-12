#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>

int main()
{   
    // int typed_int1, typed_int2, sum;
    // printf("Type an integer ");
    // scanf("%d", &typed_int1);
    // sum = typed_int1;

    // while (1)
    // {       
    //     printf("Type next integer: ");
    //     scanf("%d", &typed_int2);
    //     if (typed_int2 != 'q')
    //         sum += typed_int2;
    //     else
    //         break;
    // }

    // printf("Sum %d", sum);

    int num, sum = 0;
    // int status;

    printf("Enter an interget (q to quit): ");
    
    // status = ; // scanf's return = the number of returns

    while (scanf("%d", &num))
    {
        sum += num;
        printf("Enter next integer (q to quit): ");
        // status = scanf("%d", &num);
    }

    printf("Sum = %d \n", sum);


    return 0;
}











