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
#include <time.h> // time()

//type qualifier

int main()
{   

    /*
        Qualifier
        const, volatile, restric, _Atomic
    */

    // const
    //C99 ideompotent // just meaning you can use it manytimes 
    // ex. below
    const const const int n = 6; 

    typedef const int zip;
    const zip q = 8;
    // const -> must be initialised!!! if not, error!

    float f1 = 3.14f, f2 = 1.2f;

    const float* pf1 = &f1;
    // *pf1 = 5.0f; //error
    pf1 = &f2; //allowed

    float* const pf2 = &f1;

    *pf2 = 6.0f; //allowed
    // pf2 = &f2; //error

    const float* const fp3 = &f1;
    //  *pf3 = 7.0f; //error
    // pf2 = &pf2; //error

    /*
        Global constant
    */
    // you can put static if you want to call the file itself #include "constnats"

    /*
        volatile
        - DO not optimize
        - hardware clock
    */

    volatile int vi = 1; //volatile location
    volatile int* pvi = &vi;

    int i1 = vi;
    //...
    int i2 = vi;
    
    /*
        restrict
        - sole initial means of accessing a data object
        - compiler can't check this restriction
    */

   int ar[10] = {1, 2, 3,4, };
   int* par = ar;

   int* restrict restar = (int*)malloc(10 * sizeof(int));
   if (!restar) exit(1);

   ar[0] += 3;
   par[0] += 5;
   // par[0] += 8;

    /*
        _Atomic  -
    */
   _Atomic int acnt = 0; //atomic for global variable to prevent from being used by threads
    return 0; 
}
