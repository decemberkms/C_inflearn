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

int main()
{   

    int a = 1;
    
    printf("%d\n", a);
    printf("%p\n", &a);

    {
        int a = 5;
        printf("%d\n", a);
        printf("%p\n", &a);
        
    }

    printf("%d\n", a);
    printf("%p\n", &a);

    return 0; 
}

