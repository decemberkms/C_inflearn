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

long get_long(void);

int main()
{   
    long number;
    while(1)
    {
        printf("Between 1 and 100.");
        number = get_long();
        
        if (number > 1 && number < 100)
        {    
            printf("Okay!\n");
            break;
        }
        else   
            printf("Worng! Again\n");
    }

    return 0; 
}

long get_long(void)
{
    printf("Please input an integer and press enter.\n");

    long input;
    char c;

    while (scanf("%ld", &input) != 1)
    {
        printf("Your input - ");

        while ((c = getchar()) != '\n')
            putchar(c);

        printf(" - is not an integer. Please try again.\n");
    } 
    
    printf("Your input %ld is an ingeter. Good. \n", input);
    
    return input;

}





