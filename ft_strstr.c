/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:51:36 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 13:53:56 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle)
	{
		while (*haystack)
		{
			if (ft_strcmp(haystack, needle) == 0)
				return (haystack);
			haystack++;
		}
		return (NULL);
	}
	else
		return (haystack);
}
