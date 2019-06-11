/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:21:29 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/06/11 10:47:07 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memcpy(ptr, src, len);
	ft_memcpy(dst, ptr, len);
	free(ptr);
	return (dst);
}
