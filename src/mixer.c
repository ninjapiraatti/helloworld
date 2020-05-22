/*
** I'm here to mix it up a bit
*/

#include "../inc/helloworld.h"

char    *mixer(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] > 75)
            str[i] = str[i] + 1;
        else
            str[i] = str[i] - 1;
        i++;      
    }
    return (str);
}

/*
** #include <stdio.h>
** 
** int     main(int argc, char **argv)
** {
**    char *str;
** 
**     if (argc > 1)
**     {
**     str = argv[1];
**     str = mixer(str);
**     printf("Did you mean: %s?\n", str);
**     }
**     return (0);
** }
*/