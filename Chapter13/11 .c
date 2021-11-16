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
#include <stdalign.h> // C++ style alignas, alignof


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
    // struct {
    //     bool option1 : 7;
    //     bool option2 : 1;
    // } bbf;

    struct {
        unsigned short option1 : 1;
        unsigned short option2 : 1;
        unsigned short option3 : 1;
    } usbf;

    struct {
        unsigned int option1 : 1;
        unsigned int option2 : 1;
    } uibf;

    printf("%zd, \n", sizeof(usbf));
    printf("%zd, \n", sizeof(uibf));

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