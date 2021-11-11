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

//anonymous struct

struct names
{
    char first[20];
    char last[20];
};


struct person // struct name -> tag
{
    int id;
    struct names name;
};

struct person2
{
    int id;
    struct { char first[20]; char last[20];}; // anonymous structure
};

int main()
{   
    struct person2 ted2 = {123, {"Minsung", "Kim"}};
    puts(ted2.first); // no need to use dot operator twice!!


    return 0; 
}
