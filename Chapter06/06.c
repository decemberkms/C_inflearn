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

// input stream
int main()
{   
    char str[255];
    int i, i2;
    double d;

    scanf("%s %d %lf", str, &i, &d);
    printf("%s %d %lf\n", str, i, d);


    scanf("%s %d %d", str, &i, &i2);
    printf("%s %d %d\n", str, i, i2);

    //buffer

    char c;
    while ((c = getchar()) != '\n')
        putchar(c);
        
    printf("\n");


    return 0; 
}



