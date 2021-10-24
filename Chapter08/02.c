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

// pointer arithmetic

int main()
{   
    int* ptr = 0; // 0 not recommended; only in this lecture
    // void pointer - normally not work but it works here -_-?
    printf("%p %lld\n", ptr, (long long)ptr);

    ptr += 2;

    printf("%p %lld\n", ptr, (long long)ptr);
    // pointer's + means data type size !!!  int -> 4

    // ptr = -ptr;  not working
    // ptr = +ptr;  not working

    // subtraction

    int arr[10];
    int* ptr1 = &arr[1], *ptr2 = &arr[2];

    // ptr2 = ptr1 + ptr2;// not working!
    // my post number + his post number = ? what is that?
    int i = ptr2 - ptr1;
    // pointer's subtraction -> what is the address difference?
    printf("%p %p %d\n", ptr2, ptr1, i);

    return 0; 
}

