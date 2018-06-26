/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:51:36 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/26 12:23:03 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*big;
	char	*small;

	big = (char *)haystack;
	small = (char *)needle;
	
	if (*small)
	{
		while (*big)
		{
			if (ft_strncmp(big, small, ft_strlen(small)) == 0)
				return (big);
			big++;
		}
		return (NULL);
	}
	else
		return (big);
}
