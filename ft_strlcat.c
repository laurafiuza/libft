/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:32:43 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/26 15:17:55 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (dstsize <= d)
		return (dstsize + s);
	else
	{
		while (d + i < dstsize - 1)
		{
			dst[d + i] = src[i];
			i++;
		}
	}
	dst[d + i] = '\0';
	return (d + s);
}
