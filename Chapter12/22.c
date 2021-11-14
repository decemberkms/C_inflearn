#include <stdio.h> // getchar putchar
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h> // strlen(), strcmp()
#include <math.h>
#include <stdbool.h>
#include <ctype.h>  // character functions
#include <iso646.h>  // not used so often   -- and or not
#include <stdlib.h> //srand()   //malloc(), free()

void ToUpper(char* str) // input - char's pointer
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

void ToLower(char* str)  // input - char's pointer  // meaning they can use the same pointer
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}

void UpdateString(char* str, int(*pf)(int))
{
    while (*str)
    {
        *str = (*pf)(*str);
        str++;
    }
}

// function pointer

int main()
{
    char str[] = "Hello, World!";

    void (*pf)(char*); // you can run function with this pointer

    pf = ToUpper; // Nmae of a function is a pointer
    // pf = &TouUpper; // acceptable
    // pf = TouUpper(str); // not acceptable in C// this means you run the func
    
    printf("\tString literal %lld\n", (long long)("Hello, World!"));
    printf("\tFunction pointer %lld\n", (long long)ToUpper);
    printf("\tVariable %lld\n", (long long)str);

    (*pf)(str); // ToUpper(str); // runing the func with the pointer
    // pf(str); ANSI ok!

    printf("ToUpper %s\n", str);

    pf = ToLower;

    pf(str);

    printf("ToLower %s\n", str);

    // Passing function pointers to function
    UpdateString(str, toupper);
    printf("ToUpper %s\n", str);
    UpdateString(str, tolower);
    printf("ToLower %s\n", str);

    // NOTE: __cdecl is function calling convention
    return 0; 
}
