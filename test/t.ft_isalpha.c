/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.ft_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:39:38 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/05/28 08:40:50 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		main(int argc, char **argv)
{
	int a;
	
	a = 48 + ft_isalpha(argv[1][0]);
	ft_putchar(a);
	return 0;
}
