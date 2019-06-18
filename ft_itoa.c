/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:35:49 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/18 14:57:53 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	char			*str;
	size_t			i;
	unsigned int	number;

	i = ft_get_number_length(n);
	number = n;
	if (n < 0)
	{
		number = -n;
		i++;
	}
	if (!(str = ft_strnew(i)))
		return (NULL);
	str[--i] = number % 10 + '0';
	while (number /= 10)
		str[--i] = number % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
