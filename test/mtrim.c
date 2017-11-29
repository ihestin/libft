#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	*s="lorem \n ipsum \t dolor \n sit \t amet";

	printf("en entre ; \n XXX%sXXX\nensortie \nXXX%sXXX\n",s,ft_strtrim(s));

}
