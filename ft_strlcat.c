/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:32:43 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 17:34:17 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && (j < dstsize))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	result = 0;
	while (src[result])
		result++;
	return (result + dstsize);
}
