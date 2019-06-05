/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:00:30 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/05 10:09:48 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i] *sizeof(int));
}

int		main()
{
	char a = "hello";
	char b = "he";
	int		d;

	d = ft_memcmp(a,b,2);
	if(d == 0)
	{
		printf("%c equal to %c",a,b);
	}
	else if(d > 0)
	{
		printf("%c is greater than %c",a,b);
	}
	else if(d < 0)
	{
		printf("%c is less than %c",a,b);
	}
	return (0);
}
