/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:59:13 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 13:50:08 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*buffer;

	i = 0;
	while (i < len)
	{
		buffer[i] = (char *)src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		(char *)dst[i] = buffer[i];
		i++;
	}
	return (dst);
}
