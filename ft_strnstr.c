/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:56:25 by lfiuza            #+#    #+#             */
/*   Updated: 2018/07/10 14:32:12 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*actual_search(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i] && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && haystack[i + j]
					&& needle[j] && i + j < n)
			{
				if (j == ft_strlen(needle) - 1)
					return ((char *)haystack + i);
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (ft_strlen(needle))
		return (actual_search(haystack, needle, len));
	else
		return ((char *)haystack);
}
