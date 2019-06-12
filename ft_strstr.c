/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:49:51 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/12 17:42:24 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return ((char *)s1);
	}
	while (s1[i] != '\0')
	{
		while (s2[k] != '\0' && s1[i + k] == s2[k])
		{
			k++;
		}
		if (s2[k] == '\0')
		{
			return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
