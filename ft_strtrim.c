/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:51:18 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/26 15:47:50 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_ws(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

char		*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	if (!s)
		return (NULL);
	if (!ft_strlen(s))
		return ((char *)s);
	end = ft_strlen(s) - 1;
	while (is_ws(s[start]))
		start++;
	if (start == ft_strlen(s))
		return (ft_strdup(""));
	while (is_ws(s[end]))
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
