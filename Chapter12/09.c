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
// #include <time.h> // time()

#define NLEN 81

struct namect
{
    char* fname; // text segment!! not possbile!
    char* lname; // text segment!! not possbile!
    int letters;
};

void getinfo(struct namect*);
void makeinfo(struct namect*);
void showinfo(const struct namect*);
void cleanup(struct namect*);
char* s_gets(char* st, int n);

int main()
{   

    /*
        Dangerous useage
    */
    struct namect p = {"Minsung", "Kim"};
    printf("%s %s\n", p.fname, p.lname); // can get chars with whitespace

    // int f1 = scanf("%[^\n]%*c", p.lname);  // text segment!! not possbile!
    // printf("%s %s\n", p.fname, p.lname);  
   
    /*
       Recommended useage
    */

    char buffer[NLEN] = {0, };
    int f2 = scanf("%[^\n]%*c", buffer);
    p.fname = (char*)malloc(strlen(buffer) + 1);
    if (p.fname != NULL)
        strcpy(p.fname, buffer);

    printf("%s %s\n", p.fname, p.lname);

    


    return 0; 
}


char* s_gets(char* st, int n)
{
    char* ret_val;
    char* find;

    ret_val = fgets(st, n, stdin);  // cannot use scanf due to whitespace
    if(ret_val)
    {
        find = strchr(st, '\n'); //look for a new line
        if (find)   // if the address is not NULL
            * find = '\0'; // palce a null charater there
        else
            while (getchar() != '\n')
                continue;       //dispose of rest of line
    }

    return ret_val;
}
