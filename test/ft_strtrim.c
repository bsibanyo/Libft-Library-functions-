/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:34:51 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/21 23:54:17 by bsibanyo         ###   ########.fr       */
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

int	main()
{
	char *a;

	a = ft_strtrim("    WeThinkCode    ");
	while(a)
	{
		ft_putstr(a);
		ft_putchar('\n');
		break;
	}
	return (0);
}
