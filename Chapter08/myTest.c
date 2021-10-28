#include <stdio.h>

int main() 
{
    char * a = "Hello world!";
    
    printf("%ld \n", sizeof a);
    printf("%c \n", *a);
    printf("%p \n", a);
    for (int i = 0; i < 10; ++i)
    {
        printf("%c", a[i]);
    }
    printf("\n");

    int *b;
    // b = 0x5572f67ba004;
    printf("%p \n", b);

    return 0;
}