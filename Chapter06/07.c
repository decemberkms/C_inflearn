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


char get_choice(void);
char get_first_char(void);
int get_integer(void);
void count(void);

int main()
{   
    int user_choice;
    
    while((user_choice = get_choice()) != 'q')
    {
        switch (user_choice)
        {
            case 'a':
                printf("Avengers assemble!\n");
                break;
            case 'b':
                putchar('\a');
                break;
            case 'c':
                count();
                break;
            default:
                printf("Error with %d.\n", user_choice);
                exit(1);
                break;
        }
        
    }

    return 0; 
}


char get_choice(void)
{
    char sel;
    printf("Select one of them.\n");
    printf("a.    b.\n");
    printf("c.    d.\n");
    scanf("%c", sel);
    return sel;

}
char get_first_char(void)
{

}
int get_integer(void)
{

}
void count(void)
{
    int mine;
    printf("Type an integer");
    scanf("%d", &mine);

    for (int i = 0; i<mine; ++i)
    {
        printf("%i", i);
    }
    
    return 0;
}

