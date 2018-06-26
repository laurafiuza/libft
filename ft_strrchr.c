/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:46:20 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 17:41:50 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*to_return;

	to_return = (char *)s;

	len = 0;
	while (*to_return)
	{
		len++;
		to_return++;
	}
	to_return--;
	while (len >= 0)
	{
		if (*to_return == c)
			return (to_return);
		to_return--;
		len--;
	}
	return (NULL);
}
