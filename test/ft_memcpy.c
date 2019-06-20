/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 11:28:04 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/20 11:42:01 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdio.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char*)dst;
	s = (char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int	main()
{
	char dst[50];
	const char src[50] = "mr bruce";

	strcpy(dst, "me");
	ft_memcpy(dst, src, 10);
	printf("%s", dst);
	return (0);
}
