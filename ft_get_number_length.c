/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number_length.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:54:42 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/18 14:55:38 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t		ft_get_number_length(int n)
{
	size_t			i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}
