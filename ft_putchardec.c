/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchardec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:29:12 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/21 08:21:24 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchardec(char c)
{
	unsigned char	cc;
	unsigned int	ic;
	unsigned int	i;

	cc = (unsigned char)c;
	ic = cc;
	i = ic % 100;
	ft_putchar('0' + (ic / 100));
	ft_putchar('0' + (i / 10));
	ft_putchar('0' + (i % 10));
}
