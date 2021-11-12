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




int main()
{   

    /*
       Union
       - Store different data types in the same memory space
        - structure vs union
    */

    union my_union
    {
        int i;
        double d;
        char c;
    };
   
    union my_union uni;

    printf("%zd\n", sizeof(union my_union));
    printf("%lld\n", (long long)&uni);
    printf("%lld %lld %lld\n", (long long)&uni.i, (long long)&uni.d, (long long)&uni.c);

    union my_union save[10];

    printf("%zd\n", sizeof(save));

    union my_union uni1;
    uni1.c = 'A';
    printf(" %c %x %d\n", uni1.c, (int)uni1.c, uni1.i);

    uni1.i = 0;
    uni1.c = 'A';
    printf(" %c %x %d\n", uni1.c, (int)uni1.c, uni1.i);

    uni1.d = 1.2;
    printf(" %d %lf %d %c\n", uni1.i, uni1.d,(int)uni1.c, uni1.c);
    printf("%d, %lf, %c", uni1.i, uni1.d, uni1.c);
    return 0; 
}
