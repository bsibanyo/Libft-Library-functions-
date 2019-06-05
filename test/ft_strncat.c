/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:41:05 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/05 14:57:34 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
	{
		i++;
	}
	while(s2[j] != '\0' && (j < n))
	{
			s1[i] = s2[j];
			j++;
			i++;
	}
	return(s1);
}

int		main()
{
	char a[30] = "hello";
	const char b[20] = "good morning";

	ft_strncat(a,b,4);
	printf("%s", a);
	return (0);
}
