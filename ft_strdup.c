/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 16:44:50 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 13:51:44 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = 0;
	while (s1[len])
		len++;
	s2 = (char *)malloc(sizeof(char) * len);
	s2[len] = '\0';
	len = 0;
	while (s1[len])
	{
		s2[len] = s1[len];
		len++;
	}
	return (s2);
}
