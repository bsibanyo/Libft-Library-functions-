/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:46:25 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/12 17:04:57 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[k] != '\0')
	{
		k++;
	}
	return (k + dstsize);
}
