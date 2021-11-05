#include <stdio.h>

extern int g_int;

void func_sec()
{
    g_int += 1;
    printf("%d \n", g_int);
}