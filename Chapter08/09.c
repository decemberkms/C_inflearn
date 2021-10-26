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

    // type const, volatile ...

    const double PI = 3.141592;
    // double const PI = 3.141592; // both are possible
    
    // PI = 2.12424;

 /// array and const!!!!!!!!!!!!!!!
    const int arr[5] = {1, 2, 3, 4, 5};
    // arr[1] = 123;   not possible!  array as well

    const double arr2[3] = {1.0, 2.0, 3.0};
    // arr2[0] = 100.0;  not possible!  array as well

    const double* pd = arr2;
    // *pd = 3.0; // pd[0] = 3.0;  == arr[0] = 3.0;   all three are the same
    // pd[2] = 1024.0;  // arr2[2]= 1024.0; pointer can be used like an array

   
    printf("%f , %d\n", pd[2], arr[2]);
    // pd++; // but this is possbile -_-;
    // pd++;
    // printf("%f , %d\n", pd[2], arr[2]);

    // how to block it?
    //  const double* const pd = arr2; //this!!
    return 0; 
}


