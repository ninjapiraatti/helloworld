/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helloworld.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 13:37:41 by tlouekar          #+#    #+#             */
/*   Updated: 2020/05/22 13:46:01 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELLOWORLD_H
# define HELLOWORLD_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <time.h>

static char			flags[20] = "0123456789#-+hlL.* ";

int					rng(int min, int max);
int     			hyphens(int num);
char                *up_downer(char *str);
int                 song(int num);
		
#endif
