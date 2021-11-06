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

// memory leak

int main()
{   

    int* ptr_backup; // not recommended
    printf("Dummy output\n");

    {
        int n = 1000000;
        int* ptr = (int*)malloc(n * sizeof(int));

        if(!ptr)
        {
            printf("Mallo failed");
            exit(EXIT_FAILURE);
        }

        for (int i = 0; i < n; ++i)
            ptr[i] = i + 1;
        
        printf("%d %d\n", ptr[0], ptr[1]);
        ptr_backup = ptr;
        // free(ptr);
        // ptr = NULL;
    }

    printf("%d %d\n", ptr_backup[0], ptr_backup[1]);
    printf("Dummy output\n");

    return 0; 
}
