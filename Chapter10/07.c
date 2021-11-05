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

//static variables with external linkage
// global static variables (here) initialised to 0 automatically
int g_int = 0; // but recommended like this  // defining declaration
// double g_arr[1000] = {0.0,};


int x = 5;
int y= 1 + 2;
size_t z = sizeof(int);
// int x2 = 2* x; // not possible!  oh. I didn't know that.
// (above) variable in expression not possible

void fun_sec();

int main()
{   

    extern int g_int; //Optional here -> extern 

    // int g_int = 123; // name hiding here! (global is hided)

    // extern double g_arr[]; // size is not needed here

    printf("g_int in main() %d %p\n", g_int, &g_int);
    g_int += 1;

    fun_sec();
    
    return 0; 
}
