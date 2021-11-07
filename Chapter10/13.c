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

//calloc, realloc

int main()
{   
    int n = 10;

    int* ptr = NULL;

    // ptr = (int*)malloc(n * sizeof(int));
    ptr = (int*)calloc(n, sizeof(int));  // it just has two parameters   contiguous allocation
    // and it also initialise s
    if (!ptr)
        exit(1);

    for (int i = 0; i < n; ++i)
        printf("%d ", ptr[i]);
    printf("\n");


    // realloc
    /*
    - doesn't initialise the bytes added
    - returns NULL if can't enlarge the memory block
    - if first argument is NULL, it behaves like malloc()
    - if second srgument is 0, it frees the memory block
    */

    for (int i = 0; i < n; ++i)
        ptr[i] = i + 1;

    n = 20;

    int* ptr2= NULL;

    ptr2 = (int*)realloc(ptr, n * sizeof(int));
    // ptr = (int*)realloc(ptr, n * sizeof(int));  // this is also possible


    printf("%p %p", ptr, ptr2);
    printf("\n");
    printf("%d", ptr[0]);
    printf("\n");
    
    for (int i = 0; i < n; ++i)
        printf("%d ", ptr2[i]);

    return 0; 
}
