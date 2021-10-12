#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>


void draw(int n);

int main()
{   
    
    int i = 5;
    char c ='#'; // 35
    float f= 7.1f;

    draw(10);
    draw(c);
    draw(f);
    // arguments vs parameters

    //actual argument -> argument (values)
    // formal argument -> parameter (variables)


    return 0;
}


void draw(int n)
{
    while (n-- > 0)
    {
        printf("*");
    }
    printf("\n");
  
}












