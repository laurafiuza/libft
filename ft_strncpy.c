/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 16:57:41 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 16:00:49 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (dst[i] && src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (dst[i] && i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
