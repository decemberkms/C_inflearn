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

#define NLEN 30

struct name_count
{
    char first[NLEN];
    char last[NLEN];
    int num;
};

void receive_input(struct name_count*);
void count_characters(struct name_count*);
void show_result(const struct name_count*);
char* s_gets(char* st, int n);

int main()
{   
    struct name_count user_name;
    user_name.num = 0;
    receive_input(&user_name);
    count_characters(&user_name);
    show_result(&user_name);

    return 0; 
}


char* s_gets(char* st, int n)
{
    char* ret_val;
    char* find;

    ret_val = fgets(st, n, stdin);  // cannot use scanf due to whitespace
    if(ret_val)
    {
        find = strchr(st, '\n'); //look for a new line
        if (find)   // if the address is not NULL
            * find = '\0'; // palce a null charater there
        else
            while (getchar() != '\n')
                continue;       //dispose of rest of line
    }

    return ret_val;
}

void receive_input(struct name_count* user_name)
{   
    printf("Type your first name. \n>>");
    s_gets(user_name->first,NLEN);
    printf("Type your last name. \n>>");
    s_gets(user_name->last,NLEN);
  
}

void count_characters(struct name_count* user_name)
{
    // for(int i = 0; user_name->first[i]; ++i) 
    // {
    //     if(user_name->first[i] != ' ') 
    //     {
    //         user_name->num++;
    //     }
    // }
    // for(int i = 0; user_name->last[i]; ++i) 
    // {
    //     if(user_name->last[i] != ' ') 
    //     {
    //         user_name->num++;
    //     }
    // }

    user_name->num = strlen(user_name->last) + strlen(user_name->first);
}

void show_result(const struct name_count* user_name)
{
    printf("%s %s  %d", user_name->last, user_name->first, user_name->num);
}
