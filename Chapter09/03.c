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
#include <stdlib.h> // malloc

int main()
{   
    // Arrays of char strings

    const char* mythings[5] = {
        "Dancing in the rain",
        "Couting apples",
        "Watching movies with friends",
        "Writing sad letters",
        "Studying the C language"
    };
    
    char yourthings[5][40] = {
        "Studying the C++language"
        "Eating",
        "Watching Netflix",
        "Walking around till dark",
        "Deleting spam email"
    };

    const char* temp1 = "Dancing in the rain";
    const char* temp2 =  "Studying the C++language";

    printf("%s %lu %lu\n", mythings[0], (long unsigned)mythings[0], (long unsigned)temp1); // same address
    printf("%s %lu %lu\n", yourthings[0], (long unsigned)yourthings[0], (long unsigned)temp2); // different address



    return 0; 
}

