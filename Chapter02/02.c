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


    int a = 0;
    unsigned int int_size1 = sizeof a;
    unsigned int int_size2 = sizeof(int);
    unsigned int int_size3 = sizeof a;

    size_t int_size4 = sizeof(a);
    size_t float_size = sizeof(float);
    
    printf("Size of int type is %u bytes.\n", int_size1);
    printf("Size of int type is %zu bytes.\n", int_size4);
    printf("Size of int type is %zu bytes.\n", float_size);

    int int_arr[30];
    int* int_ptr = NULL;
    int_ptr = (int*)malloc(sizeof(int)*30);

    printf("Size of array is %zu bytes.\n", sizeof(int_arr));    
    printf("Size of array is %zu bytes.\n", sizeof(int_ptr));    


    char c = 'a';
    char string[10];

    unsigned short int char_size = sizeof(c);
    unsigned int str_size = sizeof(string);
    
    printf("Size of char is %zu bytes.\n", sizeof(c));    
    printf("Size of string is %zu bytes.\n", sizeof(string)); 



    printf("%zu\n", sizeof(struct MyStruct));
    return 0;
}
