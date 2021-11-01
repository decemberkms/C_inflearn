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
#include <stdlib.h> // malloc

void test_function()
{
    int j;
    printf("Stack high \t%llu\n", (unsigned long long)&j);
}
int main()
{   
    // Array esus pointer
    const char* pt2 = "I am a string!.";
    const char* pt3 = "I am a string!.";
    const char* pt4 = "I am a string!!!!!!."; // different
 
    const char ar1[] = "I am a string!.";
    const char ar2[] = "I am a string!.";
    const char ar3[] = "I am a string!!."; // different
 

    printf("rodata low \t%llu %llu %llu %llu \n ",
    (unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4,
    (unsigned long long)"I am a string!.");

    printf("Stack high \t%llu %llu %llu %llu \n ",
    (unsigned long long)ar1, (unsigned long long)ar2, (unsigned long long)ar3,
    (unsigned long long)"I am a string!.");

    printf("\n");

    /* memory address check*/  
    // local variable  
    printf("Stack high \t%llu %llu %llu \n ",
    (unsigned long long)&pt2, (unsigned long long)&pt3, (unsigned long long)&pt4);

    int i;
    printf("Stack high \t%llu \n", (unsigned long long) &i);

    
    
    // local variable in a function
    test_function();

    //dynamic allocation in heap
    char* p5 = (char*)malloc(sizeof(char) * 100);
    printf("Heap middle \t%llu\n", (unsigned long long)p5);

    char* p6 = (char*)malloc(sizeof(char) * 100);
    printf("Heap middle \t%llu\n", (unsigned long long)p6);




    // Array versus pointer

    // arr1++; //error because this is an array
    pt2++;
    puts(pt2);
    
    //Array and pointer difference

    char heart[] = "I love Kelly!";
    const char* head = "I love Helly!";

    for (int i = 0; i < 6; ++i)
        putchar(heart[i]);
    putchar('\n');

    for (int i = 0; i < 6; ++i)
        putchar(head[i]);
    putchar('\n');

    while (*(head) != '\0')
        putchar(*(head++));

    head = heart;
    // heart = head; //> not possible

    // heart[7] = 'M';

    printf("\n");

    const char *str1 = "when all the lights are low, ...";
    const char *copy;

    copy = str1;

    printf("%s %p %p\n", str1, str1, &str1);

    printf("%s %p %p\n", copy, copy, &copy);

    return 0; 
}

