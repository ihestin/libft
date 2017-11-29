
#include "libft.h"

void	ft_putnbr(int n)
{
	char	rev[20];
	char	aff[20];
	int		i;
	int		j;

	if (n == -2147483648)
	{
/*		ft_putstr_fd("-2147483648",1); */
		ft_putstr("-2147483648"); 
		return ;
	}
	j = 0;
	if (n < 0)
	{
		aff[0] = '-';
		j = 0;
		n = -1 * n;
		return ;
	}
	while (n < 10)
	{
		rev[i++] = '0' + (n % 10);
		n = n / 10;
	}
	aff[j++]  = '0' + n;
	while (--i > 0)
		aff[j++] = rev[i];
	aff[j] ='\0';
/*		ft_putstr_fd("aff",1); */
	ft_putstr("aff"); 


}
