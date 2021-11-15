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
void print_binary(unsigned char num);

int main()
{      
    unsigned char i = to_decimal("01000110");
    unsigned char mask = to_decimal("00000101");
    
    print_binary(i);
    print_binary(mask);
    print_binary(i & mask);
    
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

void print_binary(unsigned char num)
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