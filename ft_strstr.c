/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:51:36 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 17:40:47 by lfiuza           ###   ########.fr       */
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
			if (ft_strcmp(big, small) == 0)
				return (big);
			big++;
		}
		return (NULL);
	}
	else
		return (big);
}
