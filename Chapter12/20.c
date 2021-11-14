#include <stdio.h> // getchar putchar
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
//#include <stdint.h>  this is in inttypes.h
#include <float.h>
#include <stdbool.h>
#include <complex.h>
#include <string.h> // strlen(), strcmp()
#include <math.h>
#include <stdbool.h>
#include <ctype.h>  // character functions
#include <iso646.h>  // not used so often   -- and or not
#include <stdlib.h> //srand()   //malloc(), free()

enum spectrum {red, orange, yellow, green, blue};
const char* colors[] = {"red", "orange", "yellow", "green", "blue"};

#define LEN 30

int main()
{

    char choice[LEN] = {0, };
    enum spectrum color;
    bool color_is_found = false;

    while(1)
    {
        puts("Input a color name (empty line to quite): ");

        if (scanf("%[^\n]%*c", choice) != 1)
            break;

        for (color = red; color <= blue; color++)
        {
            if (strcmp(choice, colors[color]) == 0)
            {
                color_is_found =true;
                break;
            }
        }
   
        if (color_is_found)
            switch(color)
            {
                case red:
                    puts("Red");
                    break;
                case orange:
                    puts("Orange");
                    break;
                case yellow:
                    puts("yellow");
                    break;
                case green:
                    puts("green");
                    break;
                case blue:
                    puts("blue");
                    break;
            }
        else
            printf("Please try different color %s\n", choice);

    color_is_found = false;
    }
    puts("Goodbye!");


    return 0; 
}
