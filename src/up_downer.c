/*
** This function will make you sound stupid
*/

#include "../inc/helloworld.h"

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

char	ft_islowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	ft_isuppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	ft_isletter(char c)
{
	return (ft_islowercase(c) || ft_isuppercase(c));
}

char    *up_downer(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (ft_isletter(str[i]))
        {
            if (ft_isupper(str[i]))
                str[i] = str[i] + 32;          
        }
        i++;
        if (ft_isletter(str[i]) && str[i])
        {            
            if (ft_islower(str[i]))
                str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}

/*
** 
** #include <stdio.h>
** 
** int     main(int argc, char **argv)
** {
**     (void)argc;
**     char *str;
** 
**     str = argv[1];
**     str = up_downer(str);
**     printf("You: %s\n", str);
** }
** 
*/