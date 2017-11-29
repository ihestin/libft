/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:17:26 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/21 08:21:49 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_putmemstr(void const *b, size_t len)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)b;
	while (i < len)
		ft_putchardec(s[i++]);
}
