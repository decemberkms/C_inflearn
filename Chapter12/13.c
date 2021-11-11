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


struct book
{
    char name[101];
    char author[101];
};

// void print_books(const struct book books[], int n);  // static alloc
void print_books(const struct book *books, int n); // dynamic alloc! 
// okay not to change but it's better 

int main()
{   
    // struct book my_books[3];
    struct book *my_books = (struct book*)malloc(sizeof(struct book) * 3);
    // what about dynamic allocation?
    if (my_books == NULL) exit(1);
    my_books[0] = (struct book){"Book1", "Author1"};
    my_books[1] = (struct book){"Book2", "Author2"};
    my_books[2] = (struct book){"Book3", "Author3"};

    print_books(my_books, 3);
    
    free(my_books);

    return 0; 
}

// void print_books(const struct book books[], int n)
// {
//     for (int i = 0 ; i < n; ++i)
//         printf("%s %s\n", books[i].author, books[i].name);
//         // static alloc
// }

void print_books(const struct book *books, int n)
{
    for (int i = 0 ; i < n; ++i)
        printf("%s %s\n", books[i].author, books[i].name);
        
}