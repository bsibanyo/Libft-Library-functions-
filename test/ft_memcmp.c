/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:00:30 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/05 14:19:05 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t		i;

	i = 0;
	str1 = (char*)s1;
	str2= (char*)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
			i++;
		}
	}
	return(0);
}

int		main()
{
	int		i;
	int		j;

	const void (*fptr)(int,int);

	fptr = ft_memcmp;

	void	sum = (*fptr)(2,3);

	printf("%d",fptr);
	return (0);
}
