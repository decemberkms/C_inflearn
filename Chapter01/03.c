#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


void itoa(int n, char s[]);

int main()
{
    char c = 65;
    short s = 200;
    unsigned int ui = 3000000000U;
    long l = 65537L;
    long long ll= 12345678908642LL;

    printf("Char = %hhd, %d, %c\n", c, c,c);
    printf("Short = %hhd, %hd, %d\n", s, s, s);
    printf("unsigned int = %u, %d \n", ui, ui);
    printf("Long = %ld, %ld\n", l, l);
    printf("Long Long = %lld, %lld\n", ll, ll);
    return 0;
}
