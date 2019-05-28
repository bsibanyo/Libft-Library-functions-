/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:49:42 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/05/28 09:57:48 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	int		a;

	a = 48 + ft_isprint(argv[1][0]);
	ft_putchar(a);
	return (0);
}
