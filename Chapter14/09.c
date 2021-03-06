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
    
    Function call has overhead
    - set up the call, pass arguments, jump to the function code
    and return

    inline function
    - suggests inline replacements

    inline functions should be short
    function with internal linkeage can be made inline (GCC clang)
    you can't take its address
    

*/

static inline  int foo()
{
    return 5;
}

int main()
{     
    int ret;

    ret = foo();

    printf("Output is: %d\n", ret);

    return 0; 
}