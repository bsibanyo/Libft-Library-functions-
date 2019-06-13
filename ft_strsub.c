/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:38:44 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/13 15:16:22 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	if (!s)
		return (NULL);
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
