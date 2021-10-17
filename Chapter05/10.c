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

int main()
{   
    float max = -FLT_MAX;
    float min = FLT_MAX;
    float sum = 0.0f;
    float input;
    int n = 0;

    while (scanf("%f", &input) == 1)
    {   
        if (input < 0.0f || input > 100.0f) continue; // ignore negative and over 100

        max = (input > max) ? input : max;
        min = (input < max) ? input : max;
        sum += input;
        n++;
    }

    if (n >0)
        printf("min %f, max = %f, ave = %f", min, max, sum / n);
    else   
        printf("No input\n");

    return 0; 
}









