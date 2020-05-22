
#include <stdio.h>
#include "../inc/helloworld.h"

int     main(void) 
{
    char    str1[20];
    int     num;
    t_hello *hello;

    num = 0;
    if(!(hello = malloc(sizeof(t_hello))))
        return (0);
    inithello(hello);
    printf("\033[1;35m");
    printf("\n\nHenlo. I'm a program that prints two words on the screen. I'm really excited to meet you! Let's start and get this done!\n\nPlease give me instructions: ");
    scanf("%s", str1);
    printf("\033[0m"); 
    num =  atoi(str1);
    hyphens(num);
    song(15);
    return(0);
}