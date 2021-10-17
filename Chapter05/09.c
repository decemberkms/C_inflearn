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

// continue and break

int main()
{   
    for (int i = 0; i < 10; ++i)
    {
        if (i ==5)
            continue;// go back to the beginning of the loop
        
        printf("%d ", i);
    }


    for (int i = 0; i < 10; ++i)
    {
        if (i ==5)
            break;// break the loop here
        
        printf("%d ", i);
    } 

    printf("\n");

    int count = 0;

    while (count < 5)
    {
        int c= getchar();
        if ( c == 'a')
            continue;
        putchar(c);
        count++;
    }

    while (1)
    {
        char c = getchar();
        
        if(c == '.')
            break;

        putchar(c);
    }


    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10;++j)
        {
            if (j == 5)
                break; 
            
            printf("(%d %d)", i, j);
        }
        printf("\n");
    }

    return 0; 
}









