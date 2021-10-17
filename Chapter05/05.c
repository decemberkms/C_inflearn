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


int main()
{   
    
    unsigned num;
    bool isPrime;
    isPrime = true;

    scanf("%u", &num);

    
    for (unsigned int div = 2; (div*div) <= num; ++div)
        {
            if (num % div == 0)
            {
                isPrime = false;
                if (num == div*div)
                    printf("%u is divisible by %u. \n", num, div); 
                else
                    printf("%u is divisible by %u and %u. \n", num, div, num/div); 
                
                // else
            //     isPrime = true;    
            }
              
        }
    
    
    if (isPrime)
        printf("%u is a prime number.\n", num);
    else
        printf("%u is not a prime number \n", num);


    return 0; 
}









