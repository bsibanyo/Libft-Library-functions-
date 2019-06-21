/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:56:59 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/22 01:02:34 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "ctype.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int	main()
{
	int	i = 0;
	char c;
	char str[] = "hello";

	while (str[i])
	{
		c = str[i];
		printf("%c",ft_toupper(c));
		i++;
	}
}

