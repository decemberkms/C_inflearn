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
#include <ctype.h>  // character functions  // toupper()  ispunct()...
#include <iso646.h>  // not used so often   -- and or not
#include <stdlib.h> // malloc

int main(int argc, char * argv[])
{   
    /*  only decimal
    atoi() atof() atol()
    */

    if (argc < 3)
        printf("Wrong Usage of %s\n", argv[0]);
    else
    {
        // int times = atoi(argv[1]);

        // for (int i = 0; i < times; ++i)
        //     puts(argv[2]);

        printf("Sum = %d\n",  atoi(argv[1]) + atoi(argv[2]) );
    }
    

    /*  string to long  unsigned long, double
    strtol(), strtoul() strtod()
    strtod() converts base 10 only
    */

    char str1[] = "1024Hello";
    char* end;
    long l = strtol(str1, &end, 10); // converts until number based on the base then give the pointer the address
    printf("%s %ld %s %d\n", str1, l, end, (int)*end);

    char str2[] = "1024Hello";
    l = strtol(str1, &end, 16);
    printf("%s %ld %s %d\n", str2, l, end, (int)*end);



    /* numbers to strings
    sprintf(), itoa(), ftoa()
    */

    char temp[100];
    puts(itoa(10, temp, 16));
    sprintf(temp, "%x", 10);
    puts(temp);

    return 0; 
}

