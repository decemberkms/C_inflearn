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

#define MESSAGE "A symbloic string constat"
#define MAXLENGTH 81

int main()
{   
    char words[MAXLENGTH] = "A string in an array";
    const char* pt1= "A pointer to a string";

    puts("Puts() adds a newline at the end:");
    puts(MESSAGE);
    puts(words);
    puts(pt1);
    words[3] = 'p';
    puts(words);
    // pt1[8] = 'A'; // run time error

    char greetins[50] = "Hello, and" "How are" " You"
            " today!";
    // this is the same below
    // char greetings[50] = "Hello, how are you today!";

    puts(greetins);
    printf("%s, %p, %c\n", "We", "are", *"excellent programmers");

    const char m1[15] = "Love you!";
    const char m2[15] = {'L', 'o', 'v', 'e', ' ', 'y', 'o', 'u', '!','\0'};
    const char m3[] = "Love you!";




    return 0; 
}

