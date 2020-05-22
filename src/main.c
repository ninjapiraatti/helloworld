
#include <stdio.h>
#include "../inc/helloworld.h"

int     main(void) 
{
    char    str1[20];
    int     num;

    num = 0;
    
    printf("Enter number: ");
    scanf("%s", str1);
    num =  atoi(str1);
    hyphens(num);
    return(0);
}