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
double average(double *start, double * end);

int main()
{   

    double arr1[5] = {10, 13, 12, 7 ,8};


    printf("Avg = %f\n", average(arr1, arr1 + 5)); // pointer +

    return 0; 
}

double average(double *start, double * end)
{
    int count = end - start;
    double avg = 0.0;

    while (start < end)
    {
        avg += *start++;
        // count++;
    }
    
    avg /= (double)count;

    return avg;
}
