/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:56:12 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/04 13:32:11 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		main()
{
	char	a[30] = "Hello";
	int		length;

	length = ft_strlen(a);
	printf("length of the string: %d", length);
	return (0);

}
