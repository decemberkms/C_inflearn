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

void myFunc()
{
    printf("__func__: %s\n", __func__);
}



int main()
{     
    printf("__FILE__: %s\n", __FILE__);
    printf("__DATE__: %s\n", __DATE__);
    printf("__TIME__: %s\n", __TIME__);
    printf("__LINE__: %d\n", __LINE__);
    printf("__func__: %s\n", __func__);
    myFunc();
    printf("__STDC__: %d\n", __STDC__);
    printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);

    #line 7
    printf("__LINE__: %d\n", __LINE__);

    #line 10  "Min.txt"
    printf("__LINE__: %d\n", __LINE__);
    printf("__FILE__: %s\n", __FILE__);


#if __LINE__ != 42
#error NOT line 15
#endif

// #if defined(__linux__) != 1
// #error NOT WIN64 PLATFORM
// #endif


    return 0; 
}