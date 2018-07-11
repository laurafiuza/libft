/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:43:29 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/26 21:14:22 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*to_return;

	to_return = (char *)s;
	while (*to_return)
	{
		if (*to_return == (unsigned char)c)
			return (to_return);
		to_return++;
	}
	if (*to_return == (unsigned char)c)
		return (to_return);
	return (NULL);
}
