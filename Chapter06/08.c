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

int main()
{   

    int c;
    FILE *file = NULL;
    char file_name[] = "my_file.txt";

    file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("Failed to open file. \n");
        exit(1);
    }


    while ((c = getc(file)) != EOF)
    {
        putchar(c);
        printf("\n");
    }
    fclose(file);

    return 0; 
}

