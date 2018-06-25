/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:24:58 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 13:59:46 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*fresh;
	size_t	i;

	fresh = (char *)malloc(sizeof(char) * size);
	if (!fresh)
		return (NULL);
	i = 0;
	while (i < size)
	{
		fresh[i] = 0;
		i++;
	}
	return (fresh);
}
