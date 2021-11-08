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


int main(int argc, char* argv[])
{   

    // writing example
    {
    FILE * fp = fopen("binary_file", "wb");

    double d = 1.0 / 3.0;
    int n = 123;
    int* parr = (int*)malloc(sizeof(int) * n);
    if (!parr) exit(1);

    for (int n = 0; n < 123; ++n)
        * (parr + n) = n * 2;

    fwrite(&d, sizeof(d), 1, fp);
    fwrite(&n, sizeof(n), 1, fp);
    fwrite(parr, sizeof(d), n, fp);
    printf("%ld \n", sizeof(d));
    printf("%ld \n", sizeof(n));
    printf("%ld \n", sizeof(parr));
    fclose(fp);
    free(parr);
    // total size 8 * 1 + 4 * 1 + 123 *4 = 
    }


    {
        FILE* fp = fopen("binary_file", "rb");
        double d;
        int n = 0;
        fread(&d, sizeof(d), 1, fp);
        fread(&n, sizeof(n), 1, fp);

        int* parr = (int*)malloc(sizeof(int) * n);
        if (!parr) exit(1);

        fread(parr, sizeof(int), n , fp);

        printf("feof = %d\n", feof(fp));

        printf("%f\n", d);
        printf("%d\n", n);
        for (int i = 0; i < n; ++i)
            printf("%d ", *(parr + i));

        printf("\n");

        fclose(fp);
        free(parr);


    }



    return 0; 
}
