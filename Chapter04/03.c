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

int main()
{   
    // < <= == >= > !=  relational expression

    int n = 0;
    while (n++ < 5)
        printf("%d ", n);


    const double PI = 3.141592653589793238462643;
    double guess = 0.0;
    printf("Input PI: ");
    scanf("%lf", &guess);

    while (fabs(guess - PI) > 0.001)  // numurical analsis
    {
        printf("Fool! Try again.\n");
        scanf("%lf", &guess);
    }

    printf("Good!\n");


    return 0;
}











