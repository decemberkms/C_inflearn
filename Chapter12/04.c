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
#include <stdlib.h> //srand()   //malloc(), free()
// #include <time.h> // time()

#define LEN 20

//nested structure
struct names 
{
    char given[LEN];
    char family[LEN];
};

struct reservation
{
    struct names guest; // inctanciate once
    struct names host; // inctanciate twice
    char food[LEN];
    char place[LEN];

    int year;
    int month;
    int day;
    int hours;
    int minutes;
};

int main()
{   
    struct reservation res ={
        .guest = {"Nick", "Carraway"},
        .host = {"Jay", "Gatsby"},
        .place = {"the Gatsby mansion"},
        .food = {"Escargot"},
        .year = 1925,
        .month = 4,
        .day = 10,
        .hours = 18,
        .minutes = 30
    };
    const char* formatted =
    "\
    Dear %s\
    \n";

    printf(formatted, res.guest.family);
    return 0; 
}
