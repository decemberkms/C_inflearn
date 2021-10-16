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

// getchar()  putchar()
int main()
{   
 
    char ch;

    while ((ch = getchar()) != '\n')
    {
        // if (ch == 'f' || ch == 'F')
        //     ch = 'x';
        // // else if (ch == 'F')
        // //     ch = 'X';
        
        // for (int i = '0'; i <= '9'; ++i)
            // if (ch == i)
            //     ch = '*';
        
        // if (ch >= '0' && ch <= '9')  // this is preferred!
        //     ch = '*';

    if (ch >= 'a' && ch <= 'z') // 'A' =65  'a' = 97
        ch -= 'a' -'A'; // subtract the difference
    else if (ch >= 'A' && ch <= 'Z')
        ch += 'a' - 'A';
       
     putchar(ch);

        // ch = getchar(); // buffer
    }
    // showing hello word looping buffer
    putchar(ch);

    
    return 0; 
}









