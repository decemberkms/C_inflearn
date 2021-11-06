unsigned int next = 1;

int my_rand()
{
    next = next * 1103515245 + 1234; //psudo random number - using overflow
    next = (unsigned int) (next / 65536) % 32768; // for type setting
    
    return (int)next;   
}


void my_srand(unsigned int seed)
{
    next =seed;
}


