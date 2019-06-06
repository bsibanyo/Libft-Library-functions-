/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:46:25 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/06 09:18:23 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && (j > dstsize))
	{
		if (dst[i] == '\0')
		{
			ft_putchar(src[j]);
		}
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = src[j];
	return (*dst);
}
