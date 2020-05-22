
#include <stdio.h>
#include "../inc/helloworld.h"

int     main(void) 
{
    t_hello *hello;
    if(!(hello = malloc(sizeof(t_hello))))
        return (0);
    inithello(hello);
    talk(hello);
    return(0);
}