
#include "../inc/helloworld.h"

int     rng(int min, int max)
{
    int     num;
    int     range;

    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);

    /* using nano-seconds instead of seconds */
    srand((time_t)ts.tv_nsec);
    range = abs(min) + abs(max);
    num = rand() % range;
    num += min;
    return (num);
}