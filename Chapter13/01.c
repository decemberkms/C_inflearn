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
#include <math.h>

int to_decimal(const char bi[]);

int main()
{      
    printf("Binary (string) to decimal conversion\n");

    printf("%d\n", to_decimal("00000110"));
    printf("%c\n", (int)"00000110"[0]);
    printf("%d\n", to_decimal("00010110"));
    printf("%c\n", (unsigned char)"abcd"[0]);
    printf("%d\n", to_decimal("10010100"));    
    
    return 0; 
}


int to_decimal(const char bi[])
{
    // const size_t bits = strlen(bi);

    // unsigned char sum = 0;

    // for (size_t i = 0; i < bits; ++i)
    // {
    //     if (bi[i] == '1')
    //         sum += (int)pow(2, bits - 1  - i);
    //     else if (bi[i] != '0')
    //     {
    //         printf("Wrong character: %c", bi[i]);
    //         exit(1);
    //     }
    // }
    // return sum;
    printf("Function");
    for (int i = 0; i < 8; ++i)
        printf("%d \n", (int)bi[i]);

    printf("Function");
    return (int)bi[0] + 2*(int)bi[1] + 4*(int)bi[2] + 8*(int)bi[3] \
    + 16*(int)bi[4] + 32*(int)bi[5] + 64*(int)bi[6] + 128*(int)bi[7];
}
