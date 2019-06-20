/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 10:43:34 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/20 11:09:10 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdio.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char *p;

	p = (char*)b;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (b);
}

int	main()
{
	char str[50];
	
	strcpy(str, "bruce live");
	ft_memset(str, 'b', 5);
	printf("%s", str);
}
