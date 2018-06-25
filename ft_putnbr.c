/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 09:59:34 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/21 14:01:37 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long pos_num;

	if ((long)n < 0)
	{
		ft_putchar('-');
		pos_num = (long)n * -1;
	}
	while (pos_num >= 0)
	{
		ft_putchar((pos_num % 10) + '0');
		pos_num /= 10;
	}
}
