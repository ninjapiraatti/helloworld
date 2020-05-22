
#include "../inc/helloworld.h"

int     talk(t_hello *hello)
{
    char    str1[200];

    printf("\033[1;35m");
    printf("\n\nHenlo. I'm a program that prints two words on the screen. I'm really excited to meet you! Let's start and get this done!\n\nPlease give me instructions: ");
    scanf("%s", str1);
    printf("%s", str1);
    song(15);
    printf("\033[0m");
    return (0);
}