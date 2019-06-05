/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:19:03 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/05 08:17:42 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main()
{
	char a[50] = "there";
	char b[50] = "their";
	int		d;

	d = ft_strcmp(a,b);
	if(d == 0)
	{
		printf("a:%s is equal to b:%s", a, b);
	}
	else if(d > 0)
	{
		printf("a:%s is greater than b:%s", a,b);
	}
	else if(d < 0)
	{
		printf("a:%s is less than b:%s", a,b);
	}
	return(0);

}
