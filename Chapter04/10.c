#include <stdio.h>
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


int main()
{   
    // comma operator
    for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
        printf("%d %d\n", n, nsqr);

    // ; sequence point! comma is also a sequence point
    int i, j;
    i = 1;
    i ++, j = i;
    printf("%d, %d \n", i, j);

    int x, y, z;
    z = x = 1, y= 2;
    printf("x = %d, y = %d , z = %d \n", x, y, z);
    z = ((x = 1), (y= 2)); // right value is z 
    printf("x = %d, y = %d , z = %d \n", x, y, z);

    int my_money = (123, 456);
    printf("%d\n", my_money);
    return 0; 
}











