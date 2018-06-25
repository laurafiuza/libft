/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:30:58 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 14:05:44 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;

	fresh = (char *)malloc(sizeof(char) * (len + 1));
	fresh[len] = '\0';
	i = 0;
	while (i < len)
	{
		fresh[i] = s[start];
		start++;
		i++;
	}
	return (fresh);
}
