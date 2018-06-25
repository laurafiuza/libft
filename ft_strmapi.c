/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:10:51 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 14:04:45 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	unsigned int	i;
	char			*fresh;

	n = 0;
	while (s[n])
		n++;
	fresh = (char *)malloc(sizeof(char) * (n + 1));
	fresh[n] = '\0';
	i = 0;
	while (i < n)
	{
		fresh[i] = (*f)(i, s[i]);
		i++;
	}
	return (fresh);
}
