#include <stdio.h>


// extern int g_int;    // referencing declaration
// in block or file both are fine
// but initialisation should be once
void fun_sec()
{   
    extern int g_int;// referencing declaration
    // initialisation cannot be done here
    // due to bss
    g_int += 7;
    printf("g_int in func_sec() %d %p\n", g_int, &g_int);
}