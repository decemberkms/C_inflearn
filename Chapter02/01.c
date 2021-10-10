#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>

int main()
{
    char fruit_name[40];

    printf("What is your favourite fruit?\n");

    // scanf("%c", &fruit_name);

    scanf("%s", fruit_name); // fruit name is an address itself


    printf("I like %s\n", fruit_name);
    printf("%ld", sizeof(fruit_name));
    return 0;
}
