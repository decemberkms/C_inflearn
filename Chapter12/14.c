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


#define SLEN 101

struct book
{
    char name[SLEN];
    char author[SLEN];
};

void print_books(const struct book* books, int n);
void write_books(const char * filename, const struct book* books, int n);
struct book* read_books(const char* filename, int* n);
void read_books2(const char* filename, struct book** books_dptr, int* n);


int main()
{   
    int temp;
    int n = 3;

    struct book* my_books = (struct book*)malloc(sizeof(struct book) * n);

    if (!my_books)
    {
        printf("Malloc failed");
        exit(1);
    }


    my_books[0] = (struct book){"Book1", "Author1"};
    my_books[1] = (struct book){"Book2", "Author2"};
    my_books[2] = (struct book){"Book3", "Author3"};

    print_books(my_books, n);

    printf("\nWriting to a file.\n");
    write_books("books.txt", my_books, n);
    free(my_books);
    n = 0;
    printf("Done\n");

    printf("\n Press any key to read data from a file\n");
    // temp = _getch();

    my_books = read_books("books.txt", &n);

    return 0; 
}

void print_books(const struct book books[], int n)
{
    for (int i = 0 ; i < n; ++i)
        printf("%s %s\n", books[i].author, books[i].name);
        // static alloc
}

void write_books(const char * filename, const struct book* books, int n)
{
    FILE *f; // When working with files, you need to declare a pointer of type file. 
    // This declaration is needed for communication between the file and the program.
    f = fopen(filename, "w");
    // Opening a file is performed using the fopen() function defined in the stdio.h header file.
    
    if (f == NULL)
    {
        printf("Error opening file");
        exit(1);
    }

    for (int i = 0; i < n; ++i)
    {
        fprintf(f, "%s %s\n", books[i].author, books[i].name);
    }
    fclose(f);
}

struct book* read_books(const char* filename, int* n)
{
    FILE *f; // When working with files, you need to declare a pointer of type file. 
    // This declaration is needed for communication between the file and the program.
    f = fopen(filename, "r");
    // Opening a file is performed using the fopen() function defined in the stdio.h header file.
    
    if (f == NULL)
    {
        printf("Error opening file");
        exit(1);
    }

    if (f)
    {
        while ((*n = getc(f)) != EOF)
            putchar(*n);
        fclose(f);
    }
}   