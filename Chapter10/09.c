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
#include <stdlib.h> //srand()
#include <time.h> // time()

int main()
{   
    /*
        rand()
        - 0 to Rnad_max (typically int_max)
        - defined in stdlib.h
    */

//    srand(2);// random seed
//    srand((unsigned int)time(0)); // setting seed change change the seed with time
//    for (int i = 0; i < 10; ++i)
//    {
//        printf("%d \n", rand());
//     }

    unsigned int next = (unsigned int)time(0);

    for (int i = 0; i < 10; ++i)
    {
        next = next * 1103515245 + 1234; //psudo random number - using overflow
        next = (unsigned int) (next / 65536) % 32768; // for type setting
        printf("%d\n", (int)next);
    }




    return 0; 
}
