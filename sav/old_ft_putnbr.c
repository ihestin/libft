/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:49:58 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/21 17:36:50 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * n);
		return ;
	}
	if (n < 10)
	{
		ft_putchar('0' + n);
		return ;
	}
	ft_putnbr(n / 10);
	ft_putchar('0' + (n % 10));
}
