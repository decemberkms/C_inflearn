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

#define NUM_LIMIT 1024

void ToUpper(char*);
int PunctCount(const char*);

int main()
{   
    char line[NUM_LIMIT];
    char* new_line = NULL;
    fgets(line, NUM_LIMIT, stdin);
    new_line = strchr(line, '\n'); // find first newline
    if (new_line)
        *new_line = '\0';

    ToUpper(line);
    puts(line);
    printf("%d \n", PunctCount(line));

    return 0; 
}


void ToUpper(char* str) // string!! char* mostly
{
    while(*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char* str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str))
            ct++;
        str++;
    }
    
    return ct;
}

