
#ifndef HELLOWORLD_H
# define HELLOWORLD_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <time.h>

static char			flags[20] = "0123456789#-+hlL.* ";

typedef	struct	s_hello
{
	int			magicnumber;
}				t_hello;

int					rng(int min, int max);
int     			hyphens(int num);
char                *up_downer(char *str);
char                *mixer(char *str);
int                 song(int num);
int                 inithello(t_hello *hello);
int					talk(t_hello *hello);
void    			mood_swings(char *str);
		
#endif
