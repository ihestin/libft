#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(int argc, char *argv[])
{

	if (argc < 2) return (-1);

	printf("resultat    strcmp %d\nresultat ft_strcmp %d \n",strcmp(argv[1],argv[2]),ft_strcmp(argv[1],argv[2]));
	
	
	return(0);
}
