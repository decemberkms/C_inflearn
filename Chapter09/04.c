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

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main()
{   
    int arr[] = {4, 2, 533, 213, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n);
    selectionSort(arr,n);

    printArray(arr, n);

    return 0; 
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size)
{
    for (int i =0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n -1; ++i)
    {   
        min_idx = i;
        for (j = i + 1; j < n; ++j)
        {   
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }                       
        }
        swap(&arr[min_idx], &arr[i]);
        printArray(arr, n);
    }
}

