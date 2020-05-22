
#include "../inc/helloworld.h"

int     rng(int min, int max)
{
    int     num;
    int     range;

    srand ( time(NULL) );
    range = abs(min) + abs(max);
    num = rand() % range;
    num += min;
    return (num);
}