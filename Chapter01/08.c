#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>

int main()
{
    // round off errors
    float a, b;
    a = 1.0E20f + 1.0f;
    b = a- 1.0E20f ;

    printf("%f\n", b);

    // round off error2

    float c = 0.0f;
    for (int i = 0; i < 100 ; ++i)
    {
        c += 0.01f;
    }
    printf("%f \n", c);

    // overflow
    float max = 3.402823455E+38F;
    printf("%f \n", max);
    max = max*100.0f;
    printf("%f \n", max);
      
    // underflow

    float min = 1.401298464e-45F;
    printf("%e\n", min);
    min = min/2.0f;
    printf("%e\n", min); // subnormal. 

    // 

    return 0;
}
