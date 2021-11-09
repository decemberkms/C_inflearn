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

#define LEN 20

//nested structure
struct names 
{
    char given[LEN];
    char family[LEN];
};

struct friend
{
    struct names full_name; 
    char mobile[LEN];

};

struct my_data
{
    int a;
    char c;
    float arr[2];
};

int main()
{   
    struct friend my_friends[2] = {
        { {"Ariana", "Grande"}, "1234-1234" },
        { {"Taylor", "Swift"}, "4324-3243"}
    };
    
    struct friend* girl_friend;

    girl_friend = &my_friends[0];

    printf("%zd\n", sizeof(struct friend));
    printf("%lld %s\n", (long long)girl_friend, girl_friend->full_name.given);

    girl_friend++;

    printf("%lld %s\n\n", (long long)girl_friend, (*girl_friend).full_name.given);


    struct my_data d1 = {1234, 'A',};

    d1.arr[0] = 1.1f;
    d1.arr[0] = 2.2f;
    
    printf("%d %c %lld\n", d1.a, d1.c, (long long)d1.arr);
    printf("%f %f\n", d1.arr[0], d1.arr[1]);
    printf("%lld %lld\n\n", (long long)&d1.arr[0],(long long)&d1.arr[1]);

    struct my_data d2 = d1;
  
    printf("%d %c %lld\n", d2.a, d2.c, (long long)d2.arr);
    printf("%f %f\n", d2.arr[0], d2.arr[1]);
    printf("%lld %lld\n\n", (long long)&d2.arr[0],(long long)&d2.arr[1]);

    return 0; 
}
