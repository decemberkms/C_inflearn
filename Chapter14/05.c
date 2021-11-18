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
    #define #undef #if #ifdef #ifndef #else #elif #endif
*/

#define LIMIT 400
// #undef LIMIT

#ifndef HEADER_A
#define HEADER_A

#define TYPE 1

#if TYPE == 1
#include <fts.h>
#elif TYPE == 2
#include <ftw.h>
#else
#include <gconv.h>
#endif

#define REPORT

#ifdef REPORT
    int a = 1;
#endif

#ifdef _WIN64  // #if defined (_WIN64)
    int b =1;
#elif _WIN32
    int b =1;
#elif __linux__
    int b = 1;
#endif

int main()
{    

    printf("%d\n", LIMIT);

    return 0; 

}

#endif