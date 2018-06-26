/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:40:19 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 19:56:24 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	if (dst == src)
		return (dst);
	dest = (char *)dst;
	source = (char *)src;
	while (i < n)
	{
		*dest = *source;
		dest++;
		source++;
		i++;
	}
	return (dst);
}
