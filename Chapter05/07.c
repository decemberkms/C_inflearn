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

#define PERIOD '.'

int main()
{   
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    bool word_flag = false;
    bool line_flag = false;

    printf("Enter text: \n");

    while ((ch = getchar()) != PERIOD)
    {
        if (!isspace(ch))
            characters++;

        if (!isspace(ch) && !line_flag)
        {
            lines++;
            line_flag = true;
        }
        
        if (ch == '\n')
            line_flag = false;

        if (!isspace(ch) && !word_flag)
        {
            words++;
            word_flag = true;
        }
        
        if (isspace(ch))
            word_flag = false;

    }

    printf("Characters: %d, Words: %d, Lines: %d", characters, words, lines);


    return 0; 
}









