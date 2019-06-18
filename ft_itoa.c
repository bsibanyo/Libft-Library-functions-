/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:35:49 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/18 14:49:51 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		get_number_length(int n)
{
	size_t			i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char				*ft_itoa(int n)
{
	char			*str;
	size_t			i;
	unsigned int	number;

	i = get_number_length(n);
	number = n;
	if (n < 0)
	{
		number = -n;
		i++;
	}
	if (!(str = ft_strnew(i)))
		return (NULL);
	s[--i] = number % 10 + '0';
	while (number /= 10)
		s[--i] = number % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
