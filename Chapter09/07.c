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
#include <ctype.h>  // character functions  // toupper()  ispunct()...
#include <iso646.h>  // not used so often   -- and or not
#include <stdlib.h> // malloc

int main(int argc, char * argv[])
{   
    int count;

    printf("The command line has %d arguments:\n", argc);

    for (count = 0; count < argc; count++)
        printf("Arg %d : %s\n", count, argv[count]);
    printf("\n");

    return 0; 
}

