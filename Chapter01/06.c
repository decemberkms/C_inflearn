#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h

int main()
{
    char c = 'A';
    char d = '*';
  
    printf("%c %hhd\n", c, c);
    printf("%c %hhd\n", d, d);
    printf("%c \n", c + 1);  // A + 1 -> B
      
    char a = '\a';
    printf("%c", a);

    float salary;
    printf("$_____\b\b\b\b\b");
    scanf("%f", &salary);

    printf("AB\tCDE\n");
    printf("ABC\tDE\n");

    return 0;
}
