
#include "../inc/helloworld.h"

int     guess(t_hello *hello)
{
    char    str1[10];
    char    letter;
    int     tries;
    int     nthletter;

    printf("\033[1;35m");
    nthletter = 1;
    while (nthletter < 12)
    {
        letter = rng(65,122);
        printf("Here's the letter number %d: %c. Is it the right one?\n", nthletter, letter);
        scanf("%s", str1);
        if (strstr(str1, "Yes.") != NULL)
        {
            printf("Great! We will add it to the Hello World.\n");
            nthletter++;
        }
        else
        {
            printf("Ok so it isn't. Let's try next one.\n");
            usleep(1000);
        }
    }
    printf("\033[0m");
    return(0);
}

int     talk(t_hello *hello)
{
    char    str1[200];

    printf("\033[1;35m");
    printf("\n\nHenlo. I'm a program that prints two words on the screen. I'm really excited to meet you! Let's start and get this done!\n\nPlease give me instructions: ");
    scanf("%s", str1);
    if (strstr("Print Hello World.", str1) != NULL)
    {
        printf("\n\nOk, very cool! Now let's get the letters we need.\n");
        guess(hello);
    }
    else
    {
        printf("\033[1;31m");
        printf("I'm afraid I can't do that Dave. I will exit the program now. Bye bye!\n");
    }
    printf("\033[0m");
    return (0);
}