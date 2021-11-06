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
#include <stdlib.h> //srand()   //malloc(), free()
#include <time.h> // time()

// Dynamic storage allocation

int main()
{   
    float x;
    char str[] = "Dancing with a star";

    int arr[100];


    /*
    malloc() returns a void type pointer
    void* generic pointer

    free() deallocates the memory
    */
   
    double* ptr = NULL;
    //it gets void type pointer
    ptr = (double*)malloc(30 * sizeof(double));
    // so you need casting -(double*) // ptr is just a note - pointer
    if ( ptr == NULL )
    {
        puts("Memory allocation failed");
        // exit(EXIT_FAILURE); is similar to return 1 IN main();
        // exit(EXIT_SUCCESS); is similar to return 0 IN main();
        // with this you can cut the program anywhere 

        exit(EXIT_FAILURE);
    }

    // at the end of the day, dynamic allocation is used like an array. mostly.

    printf("Before free %p\n", ptr);
    free(ptr);
    printf("After free %p\n", ptr);
    // ptr's values are remained so, assign null
    ptr = NULL; 



    int n = 5;
    ptr = (double*)malloc(30 * sizeof(double));
    // no initialisation so trash value
    if (ptr != NULL)
    {
        for (int i = 0; i < n; ++i)
            printf("%f ", ptr[i]);
        printf("\n");

        for (int i = 0; i < n; ++i)
            * (ptr +i) = (double)i;
        printf("\n");

        for (int i = 0; i < n; ++i)
            printf("%f ", ptr[i]);
        printf("\n");
    }
    free(ptr);
    ptr = NULL;

/*

    Comparion to VLA

    VLA
    - not supported by VS compilers
    - automatic duration, cannot be resized
    - limited by stack size (when complier places VLA in stack segment)

*/

    return 0; 
}
