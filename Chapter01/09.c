#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>

int main()
{

    printf("%lu \n", sizeof(_Bool)); // the smallest memory that can be asigned -> 1 byte

    _Bool b1;

    b1 = 0;
    b1 = 1;

    printf("%d \n", b1);

    bool b2, b3;

    b2 = true;
    b3 = false;

    printf("%d %d\n", b2, b3);
 

    return 0;
}
