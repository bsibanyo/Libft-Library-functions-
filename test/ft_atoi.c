/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:11:00 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/05/31 10:11:21 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int        ft_atoi(const char *str)
{
   int        sign;
   int        result;
   int        i;

   i = 0;
   result = 0;
    sign = 1;

   while(str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
           || str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }
   if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -1;
            i++;
        }
    }
      while(str[i] != '\0')
   {
       result = result * 10 + str[i] - '0';
       i++;
   }
   return (sign * result);
}

int        main(void)
{
   char num[20] = "-10";

   printf("%d", ft_atoi(num));
   return (0);
}