#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h>

//modulus

int main()
{   

    int hour = 0, minute = 0, second = 0;
    // int temp_minute, temp_second;
    
    while (second >= 0)
    {   
        printf("Input seconds: ");
        scanf("%d", &second);
        if (second >= 0)
        {
            
            
            // temp_second = (double)temp_second;
            
            minute = second / 60;
            second %= 60;
            hour = minute /60;
            minute %= 60;

            // second = temp_second % 60;

            // temp_minute = temp_second / 60;

            // printf("Done!");minute = temp_minute % 60;

            // hour = temp_minute / 60;

            printf("\n%d hour, %d minute, %d second\n", hour, minute, second);
        }
        else
            printf("Done!\n");
    }
    

    return 0;
}
