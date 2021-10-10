#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>
#define PI 3.141592f  //   symbolic Constant! just replace this in the code  old way- still used in C
#define AI_NAME "December"

int main()
{   
    const float pi_ = 3.141592f; // symbolic Constant!  both are symbolic constant  -- recommended in C++
    float radius, area, circum;

    printf("I'm %s.\n", AI_NAME);
    printf("Input radius \n");

    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2.0f * PI * radius;

    printf("Area is %f\n", area);
    printf("Circum is %f\n", circum);


    return 0;
}
