#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>
#include <math.h>

// ranking in relational operator
int main()
{   
    int x = 1, y = 2, z;

    x > y + 2;
    x > (y + 2);

    x = y > 2;
    x = (y > 2);

    x != y == z ;
    (x != y) == z;

    return 0;
}











