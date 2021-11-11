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

#define MAXTITL 41
#define MAXAUTL 31

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    // char* title; // not recommended!!
    // char* author; // not recommneded!! cannot change! text segment -> read only!
    float price; 
};

struct rectangle
{
    double width;
    double height;
};

double rect_area(struct rectangle r)
{
    return r.width * r.height;
}

double rect_area_ptr(struct rectangle * r)
{
    return r->width * r->height;
}


int main()
{   
    struct book book_to_read = {"Crime and Punishment", "Fyodor Do", 11.2f};
    // struct initialization

    // book_to_read = {"Alice", "Carroll", 20.3f};  doesnot work
    // once initialised!

    // strcpy(book_to_read.title, "Aliics");
    //copy one to one
    //or copy struct
    // struct book book2 = {"22 ", "dasd", 11};
    // book_to_read = book2;

    book_to_read = (struct book){"Alice", "Carrol", 20.3f};
    //// interesting! compound literal!!

    return 0; 
}
