/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 08:40:56 by tlouekar          #+#    #+#             */
/*   Updated: 2020/05/22 09:12:59 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../inc/helloworld.h"

int     main(void) 
{
   char str1[20], str2[30];

   printf("Enter command: ");
   scanf("%s", str1);

   printf("I don't like that command. Enter another: ");
   scanf("%s", str2);

   printf("Failed command: %s\n", str1);
   printf("Better command: %s", str2);
   
   return(0);
}