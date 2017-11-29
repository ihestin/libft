#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>
#include "libft.h"

int main (int argc,char *argv[])
{
	int i,len,fd;
	unsigned int j;
	char c;
	ft_putnbr(-2147483648);
	printf ("\n");
	if (argc < 3) return(1);
	fd = open(argv[1], O_WRONLY|O_CREAT,S_IRUSR | S_IWUSR);
if (fd < 0) { write(2, "invalid File.\n", 14); return (2); }
	len = strlen (argv[2]);
write(fd,argv[2],len);
ft_putchar_fd('\n',fd);
	printf ("chaine : %s\n",argv[2]);
	ft_putendl_fd(argv[2],fd);
	ft_putstr_fd(argv[2],fd);
ft_putchar_fd('\n',fd);
	printf ("\n");
	ft_putmemendl_fd(argv[2],len+1,fd);
	ft_putmemstr_fd(argv[2],len+1,fd);
	printf ("\ncaractere\n");
	for (i= 0;i<=len;i++)
	{
	c = argv[2][i];
	ft_putchardec(c);
	printf("\n= %d et c =%c \n",i,c);
	ft_putchar_fd(c,fd);ft_putchar_fd(' ',fd);ft_putchar_fd('D',fd);ft_putchar_fd(':',fd); ft_putchardec_fd(c,fd);ft_putchar_fd('\n',fd);
	}
	printf ("fin boucle\n");
	if (argc == 3) {close(fd);return (0);}
	printf ("etape 1\n");
	i = atoi(argv[3]);
	printf ("etape 2\n");
	/*ft_putnbr_fd(i,fd);*/
	printf ("etape 3\n");
ft_putchar_fd('\n',fd);
	printf ("f\n");
	c = i;
	j = c;
	printf("\n chiffre %d car %c et code %u\n",i,c,j);
ft_putchar_fd('\n',fd);ft_putstr_fd("chiffre ",fd);ft_putnbr_fd(i,fd);ft_putchar_fd(c,fd);ft_putnbr_fd(j,fd);
ft_putchar_fd('\n',fd);
	ft_putchar_fd(c,fd);ft_putchar_fd(' ',fd);ft_putchar_fd('D',fd);ft_putchar_fd(':',fd);ft_putchar_fd(' ',fd); ft_putchardec_fd(c,fd); printf(" car:  %c\n",c);
ft_putchar_fd('\n',fd);
	close(fd);
	return (0);
}

