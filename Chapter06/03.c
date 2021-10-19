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

//user interface
int main()
{   
    int count = 0;
    
    while(1)
    {
        printf("Current count is %d. Continue? (y/n)\n", count);
        if (getchar() == 'n')
            break;
        else if ( c == 'y')
        {
            while(getchar() != '\n')
                continue;
                
            count++;
        }
        
    }


    return 0; 
}









