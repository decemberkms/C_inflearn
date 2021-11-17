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

//Function like macro

#define ADD1(X,Y) X+Y
#define ADD2(X,Y) ((X)+(Y))
#define SQUARE(X) X*X

int main()
{    

    int a = 1;

    printf("%d\n", 2*ADD1(1, 3));

    printf("%d\n", 2*ADD2(1, 3)); 

    printf("%d\n", SQUARE(++a));

    return 0; 

}