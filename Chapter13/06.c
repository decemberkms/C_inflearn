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


unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);
void int_binary(const int num);

int main()
{     
    /*
        shift operator

         number << n   multiply 2^n

         number >> n  devide 2^n
    */

    printf("%hhd\n", 1 << 3);
    printf("%hhd\n", 8 >> 3);
    

    printf("%hhd\n", -119 >> 3);
    printf("%hhd\n", 137 >> 3);
    
    printf("%hhd\n", -119 >> 4);
    printf("%hhd\n", 137 >> 4);
    print_binary(1 << 3);
    print_binary(8 >> 3);

    printf("%u\n", 0xffffffff);
    
    int_binary((signed)0xffffffff >> 3);
    int_binary((unsigned)0xffffffff >> 3);
    return 0; 
}


unsigned char to_decimal(const char bi[])
{
    const size_t bits = strlen(bi);

    unsigned char sum = 0;

    for (size_t i = 0; i < bits; ++i)
    {
        if (bi[i] == '1')
            sum += (int)pow(2, bits - 1  - i);
        else if (bi[i] != '0')
        {
            printf("Wrong character: %c", bi[i]);
            exit(1);
        }
    }
    return sum;
}

void print_binary(const unsigned char num)
{
    printf("Decimal %d   ", num);

    const size_t bits = sizeof(num) * 8;

    for (size_t i = 0; i < bits; ++i)
    {
        const unsigned char mask = (unsigned char)pow((double)2, (double)(bits - 1 - i));
      

        if ((num & mask) == mask)
            printf("%d", 1);
        else
            printf("%d", 0);
    }

    printf("\n");
}

void int_binary(const int num)
{   
    printf("\n");
    printf("Decimal %12d == Binary ", num);

    const size_t bits = sizeof(num) * CHAR_BIT;
    for (size_t i = 0; i < bits; ++i)
    {
        const int mask = 1 << (bits -1 - i);
        
        if ((num & mask) == mask)
            printf("%d", 1);
        else
            printf("%d", 0);
    }
    printf("\n");
}