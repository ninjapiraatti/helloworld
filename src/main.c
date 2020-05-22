
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
    printf("Enter number: ");
    scanf("%s", str1);
    printf("\033[0m"); 
    num =  atoi(str1);
    hyphens(num);
    song(15);
    return(0);
}