#include <stdio.h> // getchar putchar
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h> // strlen(), strcmp()
#include <math.h>
#include <stdbool.h>
#include <ctype.h>  // character functions
#include <iso646.h>  // not used so often   -- and or not
#include <stdlib.h> //srand()   //malloc(), free()

// variadic arguments

#define PRINT(X, ...) printf("Message " #X ": " __VA_ARGS__)

int main()
{    

    double x = 48;

    double y;

    y = sqrt(x);

    PRINT(1, "x = %g\n", x);
    

    return 0; 

}