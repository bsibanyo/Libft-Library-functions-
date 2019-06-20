/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:25:00 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/20 16:25:15 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdio.h"

char	**ft_strsplit(const char *s, char c)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;
	unsigned int	wordcount;
	char			**table;

	wordcount = 0;
	table = NULL;
	i = 0;
	if (s && ((table = (char **)malloc(sizeof(*table) * ft_strlen(s)))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			start = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			if ((end - start) > 0)
				table[wordcount++] = ft_strsub(s, start, end - start);
		}
		table[wordcount] = 0;
	}
	return (table);
}

int main(void)
{
	char **a;

	a = ft_strsplit("***we*think**code***", '*');
	while (*a)
	{
		ft_putstr(*(a++));
		ft_putchar(' ');
	}
	ft_putchar('\n');
	return (0);
}
