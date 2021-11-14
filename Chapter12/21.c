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

//NAMESPACE

int iamfunc()
{

}

int main()
{
    /*
        namespace
        - Identify parts of a program in which a name is recognised
        - you can use the same name for one variable and one tag(struct/union) - but not c++
        - C++: use' namespace' to use the same identifiers in the duplicated scope
    */

    {
        int myname = 345;
    //    double myname = 3.14// error
    }

    struct rect {double x; double y};

    struct rect rect = { 1.1, 2.2}; // struct variable can be the same as struct's tag

    // int iamfunc = iamfuc();// not okay! func name should be different to variable name

    /*
        namespace pollution
    */
    return 0; 
}
