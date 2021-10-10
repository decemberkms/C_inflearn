#include <stdio.h>

int main()
{
    int n = 1;

// label1:

//     printf("%d\n", n);
//     n = n + 1;
//     if (n == 10)
//         goto out;

//     goto label1;
// out:

    while(n < 11)
    {
        printf("%d\n", n);
        n = n + 1;
    }

    return 0;
}