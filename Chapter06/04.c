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


void display (const char cr, int const lines, const int width)
{
    for (int i = 0; i < lines; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            printf("%c",cr);
        }
        printf("\n");
    }
    
}

int main()
{   
    char c;
    int rows, cols;

    // while(1)
    // {
    //     scanf("%c %d %d", &c, &rows, &cols);
    //     while (getchar() != '\n') continue;
    //     display(c, rows, cols);
    //     if (c == '\n')
    //         break;
    // }

    printf("Input one charater and two integers: \n");
    while ((c = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        while (getchar() != '\n') continue;
        display(c, rows, cols);
        printf("Input another character and two integers:\n");
        printf("Press Enget to quit.\n");
    }


    return 0; 
}









