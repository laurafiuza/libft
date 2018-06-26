/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:56:25 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 17:43:58 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*big;
	char	*small;

	big = (char *)haystack;
	small = (char *)needle;

	i = 0;
	if (*small)
	{
		while (i < len)
		{
			if (ft_strcmp(big, small) == 0)
				return (big);
			big++;
			i++;
		}
		return (NULL);
	}
	else
		return (big);
}
