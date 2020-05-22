
#include "../inc/helloworld.h"
#include <stdlib.h>
#include <stdio.h>

int     hyphens(int num)
{
    int     i;
    char    cons[15] = "bdghklmnpstrvz";
    char    vowl[7] = "aeiouy";

    i = 0;
    while (i < num)
    {
        putchar(cons[rng(0,13)]);
        putchar(vowl[rng(0,5)]);
        putchar('\n');
        i++;
    }
    return (0);
}