#include <stdio.h> // getchar putchar
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
#include <ctype.h>  // character functions
#include <iso646.h>  // not used so often   -- and or not
#include <stdlib.h>



int main()
{   

    char a;
    float b;
    double c;

    
    char* a_ptr = &a;
    float* b_ptr = &b;
    double* c_ptr = &c;

    printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));
    printf("%zd %zd %zd\n", sizeof(a_ptr), sizeof(b_ptr), sizeof(c_ptr));
    printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));
    printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*));

    return 0; 
}

