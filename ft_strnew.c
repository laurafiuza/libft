/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:49:08 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 14:05:14 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;
	size_t	i;

	fresh = (char *)malloc(sizeof(char) * size);
	if (!fresh)
		return (NULL);
	i = 0;
	while (i < size)
	{
		fresh[i] = '\0';
		i++;
	}
	return (fresh);
}
