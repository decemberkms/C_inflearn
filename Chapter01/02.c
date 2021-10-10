#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


int main()
{
    unsigned int i = 0b11111111111111111111111111111111 + 1;
    unsigned int u = UINT_MAX;
    // printf("%ld\n", sizeof(unsigned int));
    // printf("%ld", sizeof(i));
    printf("%u\n", i); // Integer overflow!!!!!!!!!!!!!
    printf("%u\n", u);

    return 0;
}
