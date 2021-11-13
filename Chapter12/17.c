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

// anonymous union usage

struct personal_owner
{
    char rrn1[7];
    char rrn2[8];
};

struct company_ownder
{
    char crn1[4];
    char crn2[3];
    char crn3[6];    
};



struct car_data
{
    char model[15];
    int status; // 0 = personal, 1 = company
    union 
    {
        struct personal_owner po;
        struct company_ownder co;    
    };
};

void print_car(struct car_data car)
{
    printf("--------------------\n");
    printf("Car model: %s\n", car.model);

    if (car.status == 0)
        printf("Personal owner: %s - %s\n",
            car.po.rrn1, car.po.rrn2);
    else
        printf("Company owner: %s - %s - %s\n",
            car.co.crn1, car.co.crn2, car.co.crn3);
     printf("--------------------\n");
}

int main()
{   
    struct car_data my_car = { .model = "Car1", .status = 0, .po = {"123456", "1234567"}};
    struct car_data company_car = { .model = "Car2", .status = 1, .co = {"123", "12", "12345"}};

    print_car(my_car);
    
    print_car(company_car);

    return 0; 
}
