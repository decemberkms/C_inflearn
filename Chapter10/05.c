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

// register variable

void temp(register int r)
{

}

int main()
{   
    register int r;
    r = 123;
    // printf("%p\n", &r); // impossible to get address!!
    // int* ptr = &r; // impossible to get address!!

    return 0; 
}
