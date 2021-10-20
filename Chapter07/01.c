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
#include <stdlib.h>

#define WIDTH 30
#define NAME "Minsung Kim"
#define ADDRESS "Munich, Germany"

// void namecard (int i)
// {
//     printf("")
// }

// void printf_star(int n_stars)
// {
//     for (int i = 0; i < n_stars; ++i)
//     {
//          printf(' ');
//     }
//     printf("\n");   
// }

void printf_multiple(char c, int n_stars)
{
    for (int i = 0; i < n_stars; ++i)
    {
         printf("%c", c);
    }
    printf("\n");   
}

int main()
{   

    printf_multiple('*', WIDTH);
    // printf_multiple("@", WIDTH);
    // printf_multiple("@", WIDTH);
    printf_multiple('*', WIDTH);
  
    return 0; 
}

