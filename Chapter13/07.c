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

// c++ binary is possible - c -> impossbile
//                 shift       decimal binary  hexadecimal
#define MASK_1 (1 << 0) // 2^0   00000001  0x01
#define MASK_2 (1 << 1) // 2^1   00000010  0x02
#define MASK_3 (1 << 2) // 2^2   00000100  0x04
#define MASK_4 (1 << 3) // 2^3   00001000  0x08
#define MASK_5 (1 << 4) // 2^4   00010000  0x10
#define MASK_6 (1 << 5) // 2^5   00100000  0x20
#define MASK_7 (1 << 6) // 2^6   01000000  0x40
#define MASK_8 (1 << 7) // 2^7   10000000  0x80


void int_binary(const int num);
void char_binary(const char num);
void print_binary(const unsigned char num);

int main()
{     

    /*
        bool has_sword = false;   1 byte can determin 8 things
        bool has_shield = false;
        ....  
    */

    char flags = 0;
    char_binary(flags);

    printf("\nTurning bits on (settings bits)\n");

    flags = flags | MASK_1; // or -> +   I want to turn certain bit
    char_binary(flags);
    flags |= MASK_2;
    char_binary(flags);

    printf("\n Turning bits off");
    flags = flags | MASK_3;
    char_binary(flags);
    flags = flags & ~MASK_3;
    char_binary(flags);

    printf("\nToggling bits\n");

    flags = flags ^ MASK_4; // on and off  and on and off  xor operator
    char_binary(flags);

    flags = flags ^ MASK_4;
    char_binary(flags);

    flags = flags ^ MASK_4;
    char_binary(flags);

    if ((flags & MASK_5) == MASK_5) // checking bit
        printf(" You can enter");
    else
        printf(" You can't enter");
    

    int int_flag = 0xffffffff;
    int_binary(int_flag);
    int_flag &= 0xff;
    //Trim by 11111111
    int_binary(int_flag);


    return 0; 
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


void char_binary(const char num)
{   
    printf("\n");
    printf("Decimal %12d == Binary ", num);

    const size_t bits = sizeof(num) * 8;
    for (size_t i = 0; i < bits; ++i)
    {
        const char mask = 1 << (bits -1 - i);
        
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