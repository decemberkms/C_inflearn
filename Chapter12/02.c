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


int main()
{   

    struct Aligned
    {
        int a;
        float b;
        double c; 
    };

    /*
    0 1 2 3 4 5 6 7 | 8 9 10 11 12 13 14 15
    |int a  |float b| double c            |
    4 + 4 + 8 = 16
    */    
    struct Aligned a1, a2;

    printf("struct Aligned a1\n");
    printf("sizeof %zd\n", sizeof(struct Aligned));
    printf("%lld\n", (long long)& a1);
    printf("%lld\n", (long long)& a1.a);
    printf("%lld\n", (long long)& a1.b);
    printf("%lld\n", (long long)& a1.c);

    printf("struct Aligned a2\n");
    printf("sizeof %zd\n", sizeof(a2));
    printf("%lld\n", (long long)& a2);
    printf("%lld\n", (long long)& a2.a);
    printf("%lld\n", (long long)& a2.b);
    printf("%lld\n", (long long)& a2.c);

    /*
    padding struct member alignment
     -1 word: 4 bytes in x86  8 bytes in x64

    why does it happen?
    1 bit 
    1 bytes - 8 bits
    memory <-> CPU     
        transfer - 1 byte??
        one word! - one bundle, that is word!!! 
        data transfer packet
    -1 word: 4 bytes in x86  8 bytes in x64
    */

   struct Padded1
   {
       char a;
       float b;
       double c;
   };

    /*  without padding
    0 1 2 3 4 5 6 7 | 8 9 10 11 12 13 14 15| 16
   |a|float b|double c             |?  ?  ?
    1 + 4 + 8 = 13
    */

    /*  with padding
    0 1 2 3 4 5 6 7 | 8 9 10 11 12 13 14 15| 16
   |char  a|float b |double c              |
    4(char?) + 4 + 8 = 16
    */

    struct Padded1 p1, p2;

    printf("struct Padded1 p1\n");
    printf("sizeof %zd\n", sizeof(struct Padded1));
    printf("%lld\n", (long long)& p1);
    printf("%lld\n", (long long)& p1.a);
    printf("%lld\n", (long long)& p1.b);
    printf("%lld\n", (long long)& p1.c);

    printf("struct Padded1 p2\n");
    printf("sizeof %zd\n", sizeof(p2));
    printf("%lld\n", (long long)& p2);
    printf("%lld\n", (long long)& p2.a);
    printf("%lld\n", (long long)& p2.b);
    printf("%lld\n", (long long)& p2.c);

    struct Padded2
    {
        float a;
        double b;
        char c;
    
    };
   /*  with padding
    0 1 2 3 4 5 6 7 | 8 9 10 11 12 13 14 15| 16 17 18 19 20 21 22 23 24
   |float a         |double c              |  char c                | 
    8(float?) + 8 + 8 = 16 in order to keep double ( not split)
    */

    struct Padded2 p3;

    printf("struct Padded2 p3\n");
    printf("sizeof %zd\n", sizeof(p3));
    printf("%lld\n", (long long)& p3);
    printf("%lld\n", (long long)& p3.a);
    printf("%lld\n", (long long)& p3.b);
    printf("%lld\n", (long long)& p3.c);

    return 0; 
}
