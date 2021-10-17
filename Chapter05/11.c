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

// switch and case  - only char int can be used here

int main()
{   
    char c;

    while ((c = getchar()) != '.')
    {
        printf(" YOu love ");

        switch (c)
        {   
        case 'A':
        case 'a':
            printf("apple");
            break;
        case 'b':
            printf("baseball");
            break;
        default:
            printf("Nothing");
        
        }
        printf(".\n");

        while (getchar() != '\n')
            continue;
    }

    return 0; 
}









