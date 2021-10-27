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


void print_array(const int arr[], const int n);
void add_value(int arr[], const int n, const int val);
int sum(const int ar[], const int n);

int main()
{   

    int arr[] = {1, 2, 3, 4, 5};
    const int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);
    add_value(arr, n, 100); 
    print_array(arr, n);

    int s = sum(arr, n);
    printf("sum is %d\n", s);
    print_array(arr, n);


    return 0; 
}


void print_array(const int arr[], const int n)
{
    for (int i =0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}


void add_value(int arr[], const int n, const int val)
{
    int i;
    for (i = 0; i < n; ++i)
        arr[i] += val;
}

int sum(const int ar[], const int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; ++i)
        total += ar[i];
        // total += ar[i] ++; // wrong impementation!! how to prevent it from happening?
        

    return total;
}