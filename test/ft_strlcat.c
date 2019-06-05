/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:58:51 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/05 15:01:05 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while(dst[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0' && (j > dstsize))
	{
		if(dst[i] == '\0')
		{
			ft_putchar(src[j]);
		}
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = src[j];
	return(*dst);
}

int		main()
{

	char a[50] = "hello";
	const char b[50] = "bye";
	ft_strlcat(a,b,7);
	printf("%s",a);
	return(0);
}
