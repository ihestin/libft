#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int main (int argc,char *argv[])
{
	int i,len;
	unsigned int j;
	char c;
	ft_putnbr(-2147483648);
	printf ("\n");
	if (argc < 2) return(1);
	len = strlen (argv[1]);
	printf ("chaine : %s\n",argv[1]);
	ft_putendl(argv[1]);
	ft_putstr(argv[1]);
	printf ("\n");
	ft_putmemendl(argv[1],len+1);
	ft_putmemstr(argv[1],len+1);
	printf ("\ncaractere\n");
	for (i=0;i<=len;i++)
	{
	c = (argv[1])[i];
	ft_putchar(c);ft_putchar(' ');ft_putchar('D');ft_putchar(':');ft_putchar(' '); ft_putchardec(c); printf(" car:  %c\n",c);
	}
	if (argc == 2) return (0);
	i = atoi(argv[2]);
	ft_putnbr(i);
	printf ("\n");
	c = i;
	j = c;
	printf("\n chiffre %d car %c et code %u\n",i,c,j);
	ft_putchar(c);ft_putchar(' ');ft_putchar('D');ft_putchar(':');ft_putchar(' '); ft_putchardec(c); printf(" car:  %c\n",c);
	return (0);
}

