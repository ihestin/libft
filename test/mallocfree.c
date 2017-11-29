#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

int main (int argc,char *argv[])
{
	size_t i;
	int	j;
	void *ptr;
	char *str;

	if (argc <= 1)
		return(1);
	i = ft_atoi(argv[1]);
	printf("i vaut : %ld \n",i);
	ptr = ft_memalloc(i);
	ft_putmemendl(ptr,(i <10)?i:10);
	if (i > 100)
	{
		ft_putmemendl(&ptr[i/2],10);
		printf("finboucle");
		ft_putmemendl(&ptr[i-11],10);
	}
	ft_memdel(&ptr);
	str = ft_strnew(i);
	ptr = str;
	ft_putmemendl(ptr,(i <10)?i:10);
	if (i > 100)
	{
		ft_putmemendl(&ptr[i/2],10);
		printf("finboucle");
		ft_putmemendl(&ptr[i-10],10);
		ft_putchardec(str[i]);
	}
	ft_strdel(&str);

	i = 999999999999;
	j = 0;
	while ( j++ < 2000)
	{
		if (j%100 == 0) printf("debut boucle j=%d\n",j);
		printf("%d",j%10);
		str = (char *)malloc(i);
		ft_strdel(&str); 
	}
	j = 0;
	while ( j++ < 2000)
	{
		if (j%100 == 0) printf("debut boucle j=%d\n",j);
		printf("%d",j%10);
		ptr = malloc(i);
		ft_memdel(&ptr); 
	}
	return(0);
}
