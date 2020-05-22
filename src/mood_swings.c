/*
** Have you ever experienced mood swings?? I for sure have
** This AI agent will sniff your mood and act accordingly
*/

#include "../inc/helloworld.h"

void    mood_swings(char *str)
{
    int i;

    i = 0;
    if (str[i] == 'r' || str[i] == 'R')
        write(1, "RRRrrroooOOOAAArrrRRR\n", 22);
    else if (str[i] == 'a' || str[i] == 'A')
        write(1, "aaaaAAAAAaaaAAAA\n", 17);
    else if (str[i] == 'z' || str[i] == 'Z')
        write(1, "zzzZZZZZZZZZZ\n", 14);
    else if (str[i] == 'b' || str[i] == 'B')
        write(1, "BBBBbbbbuuurrrRRRRRRnnnnNNNNN\n", 30);
    else if (str[i] == 'l' || str[i] == 'L')
        write(1, "lololololololololLOL\n", 21);
    else if (str[i] == 't' || str[i] == 'T')
        write(1, "trollololololololollll\n", 23);
    else if (str[i] == 'w' || str[i] == 'W')
        write(1, "wwwWWWOWWW\n", 11);
    else
        write(1, "meow\n", 5);
    return ;
}

/*
** int     main(int argc, char **argv)
** {
**     if (argc > 1)
**         mood_swings(argv[1]);
**     return (0);
** }
*/