/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:54:21 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/05/28 10:57:55 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int		main(int argc, char **argv)
{
	int		a;

	a = ft_toupper(argv[1][0]);
	ft_putchar(a);
	return (0);
}
