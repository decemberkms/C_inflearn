#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{   
    int number;
    
    while (1)
    {
    printf("Input a positive interger: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("Even \n");
    else // this is more efficient because it doesnt have expression
        printf("Odd \n");
    
    }

    return 0; 
}









