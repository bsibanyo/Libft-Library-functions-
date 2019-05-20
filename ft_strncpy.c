/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:52:59 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/05/20 14:58:45 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char * dst, const char * src, size_t len)
{
	unsigned int		i;

	i = 0;
	while(src[i] != '\0' && (i < len))
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';
	return(dst);
}
