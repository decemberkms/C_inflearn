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

// enumerated type

int main()
{
    /*
        Enumerated type
        - symbolic names to represent integer constants
        - improve readability
        - enum-specifier (struct-specifier, union-specifier)
        Enumerators
        - symbolic constants
    */


    enum spectrum {red, orange, yellow, green, blue, violet};

    enum spectrum color;
    color = blue; // it's not string! integer!
    if(color == yellow)
        printf("yellow");

    for (color = red; color <= violet; color++) // does work in c++!
        printf("%d\n", color);


    enum pet { car, dog = 10, lion, tiger};
    // lion is 11
    return 0; 
}
