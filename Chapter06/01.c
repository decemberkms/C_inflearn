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
    int c;
    
    // while ((c = getchar()) != EOF) // end of file
    //     putchar(c);
    
    // stream  -> data stream in CS
    while(1)
    {
        c = getchar();
        printf("%d\n", c);
        if (c == EOF) // EOF when stream ends
            break;
    }

    return 0; 
}









