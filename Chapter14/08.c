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

/*
    Generic selection expression
    - Generic programming: code is not specific to a particular type

    _Generic : C11 keyword! // c++'s template!
*/

#define MYTYPE(X) _Generic((X), \
    int: "int", \
    float: "float", \
    double: "dobule", \
    default: "other"\
)

int main()
{     
    int d = 5;

    printf("%s\n", MYTYPE(d));
    printf("%s\n", MYTYPE(2.0*d));
    printf("%s\n", MYTYPE(3L));
    printf("%s\n", MYTYPE(&d));

    return 0; 
}