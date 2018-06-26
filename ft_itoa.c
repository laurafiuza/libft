/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 09:30:47 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/26 14:06:35 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*itoa;

	itoa = (char *)malloc(sizeof(char) * 2);
	if (!itoa)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(itoa, "-2147483648"));
	if (n < 0)
	{
		itoa[0] = '-';
		itoa[1] = '\0';
		itoa = ft_strjoin(itoa, ft_itoa(-n));
	}
	else if (n >= 10)
		itoa = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		itoa[0] = n + '0';
		itoa[1] = '\0';
	}
	return (itoa);
}
