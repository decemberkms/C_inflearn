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
#include <stdlib.h> // malloc
#include <string.h>

void swap(char** xp, char** yp);
void printStringArray(char* arr[], int size);
void selectionSort(char* arr[], int n);

int main()
{   
    char* arr[] = {"Cherry", "AppleBee", "Pineapple", "Apple", "Orange"};
    int n = sizeof(arr) / sizeof(arr[0]);
   
    printf("%d\n", n);
    
    printStringArray(arr, n);
    selectionSort(arr,n);
    printStringArray(arr, n);

    return 0; 
}

void swap(char** xp, char** yp)
{
    printf("%p %p \n", *xp, *yp);
    char* temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printStringArray(char* arr[], int size)
{
    for (int i =0; i < size; ++i)
        printf("%s ", arr[i]);
    printf("\n");
}

void selectionSort(char* arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n -1; ++i)
    {   
        min_idx = i;
        for (j = i + 1; j < n; ++j)
        {   
            if ( strcmp(arr[min_idx], arr[j]) > 0 )
            {
                min_idx = j;
            }                       
        }
        swap(&arr[min_idx], &arr[i]);
        printStringArray(arr, n);
    }
}

