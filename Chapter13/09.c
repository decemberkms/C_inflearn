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
#define BYTE_MASK 0xff

void int_binary(const int num);
void char_binary(const char num);

void char_to_binary(unsigned char uc)
{
    const int bits = CHAR_BIT * sizeof(unsigned char);
    for (int i = bits -1; i >= 0; i--)
        printf("%d", (uc >>i) & 1);

}
void print_binary(char *data, int bytes)
{
    for (int i = 0; i < bytes; ++i)
        char_to_binary(data[bytes - 1 - i]);
    printf("\n");
}

int main()
{    
    struct items { // item is the template
        bool has_a      : 1;
        bool has_b      : 1;
        bool has_c      : 1;
        bool has_d      : 1;
        bool has_e      : 1;
        bool has_f      : 1;
        bool has_g      : 1;
        bool has_h      : 1;       
    } items_flag; // directly initialsize the thing item_flag

    items_flag.has_a = 1;
    items_flag.has_c = 1;
    printf("Size = %zd\n", sizeof(items_flag)); // 1 BYTE!!! 8bits
    print_binary((char*)&items_flag, sizeof(items_flag));

    union {
        struct items bf;
        unsigned char uc;
    } uni_flag;

    uni_flag.uc = 0;
    uni_flag.bf.has_d = 1;
    uni_flag.uc |= (1 << 4);
    print_binary((char*)&uni_flag, sizeof(uni_flag));


    return 0; 
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