/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:59:13 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 15:59:09 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*to_return;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		buffer[i] = *(char *)src;
		src++;
		i++;
	}
	i = 0;
	to_return = dst;
	while (i < len)
	{
		*(char *)dst = buffer[i];
		dst++;
		i++;
	}
	free(buffer);
	return (to_return);
}
