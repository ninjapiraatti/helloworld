/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rng.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 08:54:56 by tlouekar          #+#    #+#             */
/*   Updated: 2020/05/22 10:42:49 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/helloworld.h"

int     rng(int min, int max)
{
    int     num;
    int     range;

    srand ( time(NULL) );
    range = abs(min) + abs(max);
    num = rand() % range;
    num += min;
    printf("%d\n", num);
    return (0);
}