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

// double average(double * arr1, int n)
double average(double arr1[], int n)
{
    printf("Address = %p in side func\n", arr1);
    // printf("Size = %zd in side func\n", sizeof arr1 );
    // printf("%lf\n", arr1);
    double avg = 0.0;

    for (int i = 0; i < 5; ++i)
    {
        avg += arr1[i];
    }

    avg /= (double)n;

    return avg;
}

int main()
{   

    double arrmine[5] = {10, 13, 12, 7 ,8};
    double arr2[5] = {1.8, -0.2, 6.3, 13.9, 20.5};
    // double arr2[3] = {1.8, -0.2, 6.3};

    printf("Address = %p\n", arrmine);
    printf("Size = %zd\n", sizeof(arrmine));

    printf("Avg = %f\n", average(arrmine, 5));
    printf("Avg = %f\n", average(arr2, 5));

    return 0; 
}

