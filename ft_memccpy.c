/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:49:57 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 13:49:13 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)dst = *(char *)src;
		dst++;
		if ((unsigned char)c == *(char *)src)
			return (dst);
		src++;
		i++;
	}
	return (NULL);
}
