/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 11:45:21 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/20 11:57:33 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdio.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char*)dst;
	s = (char*)src;
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char*)dst + i + 1);
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	char dst[50];
	char src[50] = "WTC";

	ft_memccpy(dst,src, 'a', 7);
	printf("%s", dst);
	return (0);
}
