
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
    printf("Enter number: ");
    scanf("%s", str1);
    num =  atoi(str1);
    hyphens(num);
    song(15);
    return(0);
}