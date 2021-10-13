#include <stdio.h>
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


int main()
{   
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n", i);
    }
    
    for (int i = 0; i < 100; i = i + 8)
    {
        printf("%d\n", i);
    }

    for (int c = 'A'; c <= 'Z'; c++)
    {
        printf("%c\n", c);
    }

    for (int i = 0; i*i < 10; i++)
    {
        printf("%d\n", i);
    }
    
    for (int x = 1, y = 5; y <= 20; y =(++x * 3) + 10)
    {
        printf("%d \n", x);
    }

    int i , n;
    n = 2;
    for (i = 2; n < 10;)
    {
        n = n * i;
        printf("%d \n", n);
    }

    // for( ; ; ) infinite loop
    //     printf("! "); 

    // int i = 0;
    for (printf("Let's go!\n"); i != 7; scanf("%d", &i))
        ;
    return 0; // good code is not from technic it's from logic.
}











