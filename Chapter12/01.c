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
#include <time.h> // time()

#define MAX 41

struct person  //Person is a tag of structure
{
    char name[MAX];     // member   here not occupy memory yet
    int age;            // member   just a template here. ( x cpp)
    float height;       // member
};


int main()
{   

    int flag;

    // Structure variable
    struct person genie; // here memory is occupied

    strcpy(genie.name, "Will Smith");
  
    genie.age = 1000;
    flag = scanf("%f", &genie.height);
    printf("%f\n", genie.height);


    struct person Min = {"Min", 33, 178.0f};

    struct person Pee = {
        "Pee", 
        29, 
        160.0f
    };

    struct person Third = {
        .age = 10,
        .height = 110,
        .name = "ZZ"        
    };


    struct person* pointer;
    pointer = &genie;

    pointer->age = 110; // indirect membership operator

    printf("%s %d\n", pointer->name, (*pointer).age);


    struct book
    {
        char title[MAX];
        float price;
    };

     struct {
        char title[MAX];
        float price;
    } apple, apple2;  // direct struct declaration  no tag

    typedef struct person person;
    person zzz;

    typedef struct {
    char title[MAX];
    float price;
    } friend; 
    
    friend f2;


    
    return 0; 
}
