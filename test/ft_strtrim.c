/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:26:32 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/20 16:26:35 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	finish;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_whitespace(s[start]))
		start++;
	finish = ft_strlen(s);
	while (ft_whitespace(s[finish - 1]))
		finish--;
	if (finish < start)
		finish = start;
	return (ft_strsub(s, start, finish - start));
}

int main(void)
{
	char *c;
	char *a;

	a = "      WeThinkCode    ";
	ft_putstr(a);
	ft_putchar('\n');
	c = ft_strtrim(a);
	while(*(c) != '\0')
	{
		ft_putstr(c);
		ft_putchar('\n');
	}
	return (0);
}
