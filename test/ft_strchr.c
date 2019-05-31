/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 12:04:24 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/05/31 12:06:17 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
char    *ft_strchr(const char *s, int c)
{
   while (*s)
   {
       if (*s == c)
           return ((char*)s);
       s++;
   }
   if (c == '\0')
       return ((char*)s);
   return (0);
}

int		main()
{
	write(1, (strchr("abcccsss",99)), 1);
	write(1, (ft_strchr("abcccsss", 99)),1);
	return(0);
}
