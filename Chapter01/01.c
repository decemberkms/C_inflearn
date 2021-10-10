#include <stdio.h>

int main()
{
    // int i = 0, j = 0;
    // int sum;

    // printf("Input two integers\n");
    // scanf("%d%d", &i, &j);

    // sum = i + j;

    // printf("%d plus %d  = %d\n", i,j, sum);
    // return 0;

    float Won = 0.0f;
    float dollar = 0.0f;

    printf("Input won\n");
    scanf("%f", &Won);

    dollar = Won*0.00089;

    printf("Dollar = %f\n", dollar);

    return 0;
}