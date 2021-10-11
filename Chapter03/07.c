#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>

//modulus

int main()
{   
    // int doulbe float -> same
   int a = 0;
   a++;
   printf("%d\n", a);

   ++a;
   printf("%d\n", a);

   int count = 0;
   while (count++ < 10)
   {
       printf("%d ", count);
    //    ++count;
   }
    

    return 0;
}
