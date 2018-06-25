/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:56:25 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 13:53:33 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle)
	{
		while (i < len)
		{
			if (ft_strcmp(haystack, needle) == 0)
				return (haystack);
			haystack++;
			i++;
		}
		return (NULL);
	}
	else
		return (*haystack);
}
