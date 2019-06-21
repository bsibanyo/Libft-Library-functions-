/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:06:21 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/22 01:09:49 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>
#include "stdio.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

int		main(void)
{
	char str[] = "HELLO";
	char c;
	int	i;

	i = 0;
	while(str[i])
	{
		c = str[i];
		printf("%c", ft_tolower(c));
		i++;
	}
}
