
#include "../inc/helloworld.h"

int     song(int num)
{
    int     i;
    int     j;
    int     sooooong;
    char    cons[15] = "bdghklmnpstrvz";
    char    vowl[7] = "aeiouy";
    char    rndvowl;

    i = 0;
    printf("\n\nI will now sing you the song of my people.\n\n");
    while (i < num)
    {
        usleep(100);
        j = 0;
        putchar(cons[rng(0,13)]);
        sooooong = rng(1, 25);
        rndvowl = vowl[rng(0,5)];
        while (j < sooooong)
        {
            putchar(rndvowl);
            usleep(100);
            j++;
        }
        putchar(' ');
        i++;
    }
    putchar('\n');
    return (0);
}