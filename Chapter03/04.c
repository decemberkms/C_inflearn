#include <stdio.h>

int main()
{   
    float seed, target, interest;

    printf("Input seed money: ");
    scanf("%f", &seed);

    printf("Input target money: ");
    scanf("%f", &target);

    printf("Input interest(%%): ");
    scanf("%f", &interest);

    double fund = seed;
    int year_count = 0;

    while (fund <= target)
    {

        fund += fund * interest/ 100.0;
        ++year_count;
        printf("Year %d, fund %f\n", year_count , fund);
    }

    
    printf("It takes %d years for %lf \n", year_count, fund);
    

    return 0;
}
