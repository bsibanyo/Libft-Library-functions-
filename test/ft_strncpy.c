/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:22:45 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/12 10:59:04 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0' && (i < len))
	{
		dst[i] = src[i];
		i++;
	}
	while(len > i)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

int		main()
{
	const char	a[50] = "Hello";
	char	b[50];

	ft_strncpy(b,a,3);
	printf("%s", b);
	return (0);
}
