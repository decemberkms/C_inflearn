#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>

struct MyStruct
{
    int i;
    float f;
};

int main()
{   

    int a = 1;
    int int_arr[10] = {0,1,2,3,4,5,6,7,8,9};
    
    printf("%i %i %i \n", int_arr[0], int_arr[1], int_arr[9]);

    char c= 'a';
    char str1[10] = "Hello"; //maximum 9! due to \0
    char str2[10] = {'H', 'i'};

    printf("%c, %zu \n", c, sizeof(c));
    printf("%s, %zu \n", str1, sizeof(str1));
    printf("%s, %zu \n", str2, sizeof(str2));

    printf("%hhi, %hhi %hhi \n", str2[0], str2[1], str2[3]);

    char str3[30] = "Hello, \0 World!";
    printf("%s\n", str3);
    printf("%c\n", str3[10]);

    // printf("%i \n", int_arr[10000]);

    // printf("Size of int type is %zu bytes.\n", int_size4);
    // printf("Size of int type is %zu bytes.\n", float_size);

    return 0;
}
