/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:34:18 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 14:04:12 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*fresh;
	unsigned int	n;

	n = ft_strlen(s1);
	n += ft_strlen(s2);
	fresh = (char *)malloc(sizeof(char) * (n + 1));
	if (!fresh)
		return (NULL);
	fresh[n] = '\0';
	n = 0;
	while (*s1)
	{
		fresh[n] = *s1;
		s1++;
		n++;
	}
	while (*s2)
	{
		fresh[n] = *s2;
		s2++;
		n++;
	}
	return (fresh);
}
