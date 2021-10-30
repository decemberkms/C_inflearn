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

// double pointer

int main()
{   
    // int n = 5;
    // double x;
    // x = n; // no error

    // int* p1 = &n;
    // double* pd = &x;
    // // pd = p1; // error!! no promotion
    // // pd = (double*)p1; // this is possbile but not recommended

    // int* pt; // just a pointer
    // int (*pa)[3]; // pointer of 3 arrays
    // int ar1[2][3] = {3, };
    // int ar2[3][2] = {7, };
    // int** p2;

    // pt = &ar1[0][0]; // pointer to int
    // for (int i = 0; i < 6; ++i)\
    //     printf("%d ", *(pt + i));
    // pt = ar1[0]; // pointer to int
    // //pt = ar1; //error! // ar1 2D array
    // pa = ar1; // 
    // // pa = ar2;
    
    // p2 = &pt;
    // *p2 = ar2[0];

    int x =20;
    const y = 23;
    int* p1 = &x;
    const int* p2 = &y; // 
    const int** pp2 = &p1;
    // p1 = p2;
    // *p2 = 123;

    return 0; 
}


