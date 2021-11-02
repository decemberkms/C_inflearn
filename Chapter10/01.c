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

// scope linkage duration
/*
 Variable scopes (visibility)
 -block, function, function prototype, file

*/

int g_i = 123; //global        this is file scope!
int g_j;  //global             this is file scope!

void func1()
{
    g_i++;
    printf("in func1 ! %d\n", g_i);
}

void func2()
{
    g_i += 2;
    // local++; // error!!
}

int main()
{   
    int local =1234;

    func1();
    func2();

    printf("%d\n", g_i);
    printf("%d\n", g_j); // not initialised!! global/static variables are initialised to 0 when start!!! (BSS segment)
    printf("%d\n", local);

    return 0; 
}

