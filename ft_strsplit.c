/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:35:20 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/20 08:42:05 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	unsigned int	start;
	unsigned int	finish;
	unsigned int	i;
	unsigned int	wc;
	char			**table;

	wc = 0;
	table = NULL;
	i = 0;
	if (s && ((table = (char **)malloc(sizeof(*table) * ft_strlen(s)))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			start = 0;
			while (s[i] != c && s[i])
				i++;
			finish = 0;
			if ((finish - start) > 0)
				table[wc++] = ft_strsub(s, start, finish - start);
		}
		table[wc] = 0;
	}
	return (table);
}
