/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 11:59:23 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/20 12:03:28 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdio.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char*)dst;
	s = (char*)src;
	if (!d && !s)
		return (NULL);
	if (s < d)
		while (++i <= len)
			d[len - i] = s[len - i];
	else
	{
		while (len-- > 0)
		{
			*(d++) = *(s++);
		}
	}
	return (dst);
}

int		main()
{
	char dst[50] = "Hello";
	char src[50] = "world";

	ft_memmove(dst, src, 7);
	printf("%s", dst);
	return (0);
}
