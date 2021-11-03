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

// automatic variable
// duration is automatic! 
//in stack
// {  here }
// no linkage
// c is originally for making operating systems.

void func(int k);

int main()
{   
    int a; // auto - here means automatic storage - local variable
    a = 1024;
                    // local varialbe - initialised not automatic! global/static - automatic 
                    // initialisation
    int b = a * 3;   
    
    int i = 100;
    int j = 2;
    int* i_ptr = &i;
    printf("i %lld\n", (long long)&i);

    {
        int i = 3; // name hiding  memory space different // but the names are the same
        printf("i pointer %lld, global i %d \n", (long long)i_ptr, *i_ptr);
        printf("i %lld\n", (long long)&i);
        // j is visible
        printf("j = %d\n", j);
    }

    printf("i %lld\n", (long long)&i);

    for (int m = 1; m < 2; m++)
        printf("m %lld\n", (long long)&m);

    func(5); // cannot see any of the variables defined so far.

    return 0; 
}

void func(int k) // different stack frame! 
                // this is intended to save memory!
{
    int i = k * 2;
    printf("i %lld \n", (long long)&i);
}
