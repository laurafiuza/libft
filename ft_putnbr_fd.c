/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 10:12:40 by lfiuza            #+#    #+#             */
/*   Updated: 2018/06/25 17:56:51 by lfiuza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long pos_num;

	pos_num = (long)n;
	if (pos_num < 0)
	{
		ft_putchar_fd('-', fd);
		pos_num *= -1;
	}
	while (pos_num >= 0)
	{
		ft_putchar_fd(((pos_num % 10) + '0'), fd);
		pos_num /= 10;
	}
}
