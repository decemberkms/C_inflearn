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
#include <stdlib.h> //srand()   //malloc(), free()
// #include <time.h> // time()

#define MAX_TITLE 40
#define MAX_AUTHOR 40
#define MAX_BOOKS 3

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


struct book
{
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    float price;
 
};

int main()
{   
    struct book library[MAX_BOOKS] = { {"Empty", "Empty", 0.0f}, };

    int count = 0;

    while(1)
    {   
        printf("Input a book title or press [Enter] to stop \n >>");
        // if (s_gets(library[count].title, MAX_TITLE) == "\n") break;
        if (s_gets(library[count].title, MAX_TITLE) == NULL) break;
        if (library[count].title[0] == '\0') break;

        printf("Input the author \n");
        s_gets(library[count].author, MAX_AUTHOR);
        
        printf("Input the price. \n");
        int flag = scanf("%f", &library[count].price);
        while (getchar() != '\n')
            continue; // clear buffer

        count++;



        if (count == MAX_BOOKS)
        {
            printf("No more books \n");
            break;
        }


        if (count >0)
        {
            printf("\nThe list of books: \n");
            for (int i = 0; i < count; i++)
                printf("\"%s\" written by %s: $%.1f\n",
                    library[i].title, library[i].author, library[i].price);
        }
        else
            printf("No books to show\n");

    }
    return 0; 
}
