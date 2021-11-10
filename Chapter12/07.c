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

#define FUNDLEN 50

struct fortune 
{
    char bank_name[FUNDLEN];
    double bank_saving;
    char fund_name[FUNDLEN];
    double func_invest;
};

double sum(const struct fortune *my_fortune);

int main()
{   
    struct fortune my_fortune =
    {
        "Wells-Fargo",
        4032.27,
        "JPMorgan Chase",
        8543.94
    };

    printf("Total: $%.2f.\n", sum(&my_fortune));
    
    return 0; 
}

double sum(const struct fortune *my_fortune)
{   
    // *x = 0.0f;
    // *y = 0.0f; // this? can happen!? so const
    return my_fortune->bank_saving + my_fortune->func_invest;
}
