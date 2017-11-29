#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

typedef union u_reffonc
{
	int		(*f0)(const char *);
	int		(*f1)(const char *, const char *);
	char	*(*f2)(const char *);
	size_t  (*f3)(const char *);
	char    *(*f4)(char *,const char *);
	char    *(*f5)(char *,const char *, size_t);
	char    *(*f6)(const char *,const char *);
	char    *(*f7)(char *,const char *);
	char    *(*f8)(char *,const char *, size_t);
	size_t   (*f9)(char *,const char *,size_t);
	int		(*f10)(const char *, const char *,size_t);
	int		(*f11)(int c);
	char    *(*f12)(const char *,const char *, size_t);
	char    *(*f13)(const char *, int);
	void    *(*f14)(void *, int, size_t);
	void    (*f15)(void *, size_t);
	void    *(*f16)(void *, const void *, size_t);
	void    *(*f17)(void *, const void *, int, size_t);
	void    *(*f18)(void *, const void *, size_t);
	void    *(*f19)(const void *, int, size_t);
	int	    (*f20)(const void *, const void *, size_t);
}               t_ptf;

typedef struct s_fonc
{
	char	*nom;
	int		tyfonc;
	t_ptf	fonc_ref;
	t_ptf	fonc_ft;
}               t_fonc;

t_fonc   * init(int *nb)
{
	t_fonc  *lstr;
	lstr = (t_fonc  *) malloc (35 * sizeof(t_fonc));

	lstr[0].nom = "atoi";
	lstr[0].tyfonc = 0 ;
	lstr[0].fonc_ref.f0= &atoi;
	lstr[0].fonc_ft.f0  = &ft_atoi;

    lstr[1].nom = "strcmp";
	lstr[1].tyfonc = 1 ;
	lstr[1].fonc_ref.f1 = &strcmp;
	lstr[1].fonc_ft.f1  = &ft_strcmp;

	lstr[2].nom = "strdup";
	lstr[2].tyfonc = 2 ;
	lstr[2].fonc_ref.f2 = &strdup;
	lstr[2].fonc_ft.f2  = &ft_strdup;

	lstr[3].nom = "strlen";
	lstr[3].tyfonc = 3 ;
	lstr[3].fonc_ref.f3 = &strlen;
	lstr[3].fonc_ft.f3  = &ft_strlen;

	lstr[4].nom = "strcpy";
	lstr[4].tyfonc = 4 ;
	lstr[4].fonc_ref.f4 = &strcpy;
	lstr[4].fonc_ft.f4  = &ft_strcpy;

	lstr[5].nom = "strncpy";
	lstr[5].tyfonc = 5 ;
	lstr[5].fonc_ref.f5 = &strncpy;
	lstr[5].fonc_ft.f5  = &ft_strncpy;

	lstr[6].nom = "strlcpy";
	lstr[6].tyfonc = 9 ;
	lstr[6].fonc_ref.f9 = &strlcpy;
	lstr[6].fonc_ft.f9  = &ft_strlcpy;

	lstr[7].nom = "strcat";
	lstr[7].tyfonc = 7 ;
	lstr[7].fonc_ref.f7 = &strcat;
	lstr[7].fonc_ft.f7  = &ft_strcat;

	lstr[8].nom = "strncat";
	lstr[8].tyfonc = 8 ;
	lstr[8].fonc_ref.f8 = &strncat;
	lstr[8].fonc_ft.f8  = &ft_strncat;

	lstr[9].nom = "strlcat";
	lstr[9].tyfonc = 9 ;
	lstr[9].fonc_ref.f9 = &strlcat;
	lstr[9].fonc_ft.f9  = &ft_strlcat;

	lstr[10].nom = "strstr";
	lstr[10].tyfonc = 6 ;
	lstr[10].fonc_ref.f6 = &strstr;
	lstr[10].fonc_ft.f6  = &ft_strstr;

	lstr[11].nom = "strncmp";
	lstr[11].tyfonc = 10 ;
	lstr[11].fonc_ref.f10 = &strncmp;
	lstr[11].fonc_ft.f10  = &ft_strncmp;

	lstr[12].nom = "isalpha";
	lstr[12].tyfonc = 11 ;
	lstr[12].fonc_ref.f11 = &isalpha;
	lstr[12].fonc_ft.f11  = &ft_isalpha;
	
	lstr[13].nom = "isdigit";
	lstr[13].tyfonc = 11 ;
	lstr[13].fonc_ref.f11 = &isdigit;
	lstr[13].fonc_ft.f11  = &ft_isdigit;
	
	lstr[14].nom = "isalnum";
	lstr[14].tyfonc = 11 ;
	lstr[14].fonc_ref.f11 = &isalnum;
	lstr[14].fonc_ft.f11  = &ft_isalnum;
	
	lstr[15].nom = "isascii";
	lstr[15].tyfonc = 11 ;
	lstr[15].fonc_ref.f11 = &isascii;
	lstr[15].fonc_ft.f11  = &ft_isascii;
	
	lstr[16].nom = "isprint";
	lstr[16].tyfonc = 11 ;
	lstr[16].fonc_ref.f11 = &isprint;
	lstr[16].fonc_ft.f11  = &ft_isprint;
	
	lstr[17].nom = "toupper";
	lstr[17].tyfonc = 11 ;
	lstr[17].fonc_ref.f11 = &toupper;
	lstr[17].fonc_ft.f11  = &ft_toupper;
	
	lstr[18].nom = "tolower";
	lstr[18].tyfonc = 11 ;
	lstr[18].fonc_ref.f11 = &tolower;
	lstr[18].fonc_ft.f11  = &ft_tolower;
	
	lstr[19].nom = "strnstr";
	lstr[19].tyfonc = 12 ;
	lstr[19].fonc_ref.f12 = &strnstr;
	lstr[19].fonc_ft.f12  = &ft_strnstr;
	
	lstr[20].nom = "strchr";
	lstr[20].tyfonc = 13 ;
	lstr[20].fonc_ref.f13 = &strchr;
	lstr[20].fonc_ft.f13  = &ft_strchr;

	lstr[21].nom = "strrchr";
	lstr[21].tyfonc = 13 ;
	lstr[21].fonc_ref.f13 = &strrchr;
	lstr[21].fonc_ft.f13  = &ft_strrchr;

	lstr[22].nom = "memset";
	lstr[22].tyfonc = 14 ;
	lstr[22].fonc_ref.f14 = &memset;
	lstr[22].fonc_ft.f14  = &ft_memset;

	lstr[23].nom = "bzero";
	lstr[23].tyfonc = 15 ;
	lstr[23].fonc_ref.f15 = &bzero;
	lstr[23].fonc_ft.f15  = &ft_bzero;

	lstr[24].nom = "memcpy";
	lstr[24].tyfonc = 16 ;
	lstr[24].fonc_ref.f16 = &memcpy;
	lstr[24].fonc_ft.f16  = &ft_memcpy;

	lstr[25].nom = "memccpy";
	lstr[25].tyfonc = 17 ;
	lstr[25].fonc_ref.f17 = &memccpy;
	lstr[25].fonc_ft.f17  = &ft_memccpy;

	lstr[26].nom = "memmove";
	lstr[26].tyfonc = 18 ;
	lstr[26].fonc_ref.f18 = &memmove;
	lstr[26].fonc_ft.f18  = &ft_memmove;

	lstr[27].nom = "memchr";
	lstr[27].tyfonc = 19 ;
	lstr[27].fonc_ref.f19 = &memchr;
	lstr[27].fonc_ft.f19  = &ft_memchr;

	lstr[28].nom = "memcmp";
	lstr[28].tyfonc = 20 ;
	lstr[28].fonc_ref.f20 = &memcmp;
	lstr[28].fonc_ft.f20  = &ft_memcmp;

	*nb = 29;
    return(lstr);
};

typedef void  (*tf_aff)(t_ptf, t_ptf, char **,int) ;

int recherche(char * fct,t_fonc * tabs,int i)
{
	int j;
    j=-1;
	while (++j < i)
		if (strcmp (fct, tabs[j].nom) == 0)
			return (j);
	return(j);
};

void aff0(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	if (nb <=2)
	{
		printf("Il manque des arguments");
		return;
	}
	if (fref.f0 != NULL)
		printf("resultat control %d\n",fref.f0(argument[2]));
	printf("resultat a tester %d\n",ftest.f0(argument[2]));
}	

void aff1(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	if (nb <=3)
	{
		printf("Il manque des arguments");
		return;
	}
	if (fref.f1 != NULL)
		printf("resultat control %d\n",fref.f1(argument[2],argument[3]));
	printf("resultat a tester %d\n",ftest.f1(argument[2],argument[3]));
	printf("control en dure %d\n",fref.f1("test\200", "test\0"));
	printf("a tester %d\n",ftest.f1("test\200", "test\0"));
}	

void aff2(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	if (nb <=2)
	{
		printf("Il manque des arguments");
		return;
	}
	if (fref.f2 != NULL)
		printf("resultat control %s\n",fref.f2(argument[2]));
	printf("resultat a tester %s\n",ftest.f2(argument[2]));
}	

void aff3(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	if (nb <=2)
	{
		printf("Il manque des arguments");
		return;
	}
	if (fref.f3 != NULL)
		printf("resultat control %ld\n",fref.f3(argument[2]));
	printf("resultat a tester %ld\n",ftest.f3(argument[2]));
}	

void aff4(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	char	*dest;
	int		l,i;

	if (nb <=2)
	{
		printf("Il manque des arguments");
		return;
	}
	l = strlen(argument[2]);
	dest = (char *) malloc(sizeof(char)*(l+4));
	if (dest == NULL)
		return;
i = -1;
while (++i < l)
	dest[i] = '0' + i % 10;
	dest[l] = '0';
	dest[l+1] = '1';
	dest[l+2] = '2';
	dest[l+3] = '\0';
	printf(" chaine dest %s et fin chaine %s\n",dest, &dest[l+1]);
	if (fref.f4 != NULL)
		printf("resultat control %s\n",fref.f4(dest,argument[2]));
	printf(" chaine dest %s et fin chaine %s\n",dest, &dest[l+1]);
	printf("resultat a tester %s\n",ftest.f4(dest,argument[2]));
	printf(" chaine dest %s et fin chaine %s\n",dest, &dest[l+1]);
}	

void aff5(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	char	*dest;
	int		i,l;
	size_t  k;

	if (nb <=3)
	{
		printf("Il manque des arguments");
		return;
	}
	l = strlen(argument[2]);
	k = atoi(argument[3]);
	l = (l < (int) k) ? (int) k : l;
	dest = (char *) malloc(sizeof(char)*(l+4));
	if (dest == NULL)
		return;
	for (i = 0; i < l+3; i++)
		dest[i] = '0' + i % 10;
	dest[l+3] = '\0';

	printf(" chaine dest %s et fin chaine %s\n",dest, &dest[l+1]);
	if (fref.f5 != NULL)
		printf("resultat control %s\n",fref.f5(dest,argument[2],k));
	printf(" chaine dest %s et fin chaine %s\n",dest, &dest[l+1]);
	for (i = 0; i < l+3; i++)
		dest[i] = '0' + i % 10;
	printf("resultat a tester %s\n",ftest.f5(dest,argument[2],k));
	printf(" chaine dest %s et fin chaine %s\n",dest, &dest[l+1]);
}	

void aff6(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	if (nb <=3)
	{
		printf("Il manque des arguments");
		return;
	}
	if (fref.f6 != NULL)
		printf("resultat control %s\n",fref.f6(argument[2],argument[3]));
	printf("resultat a tester %s\n",ftest.f6(argument[2],argument[3]));
}	

void aff7(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	int i,j,k;
	char *dest;
	char *dest2;

	if (nb <=3)
	{
		printf("Il manque des arguments");
		return;
	}
	i = strlen(argument[2]);
	j = strlen(argument[3]);
	dest = (char *) malloc(sizeof(char)*(i+j+4));
	dest2 = strcpy(dest, argument[2]); dest[i+j+3] = '\0'; for (k=i+1; k<i+j+3; k++) dest[k]='1';	   
printf(" chaine dest %s et fin chaine %s\n",dest, &dest[i+1]);
	if (fref.f7 != NULL)
		printf("resultat control %s\n",fref.f7(dest, argument[3]));
printf(" chaine dest %s et fin chaine %s\n",dest, &dest[i+1]);
	dest2 = strcpy(dest, argument[2]); dest[i+j+3] = '\0'; for (k=i+1; k<i+j+3; k++) dest[k]='1';	   
printf(" chaine dest %s et fin chaine %s\n",dest, &dest[i+1]);
	printf("resultat a tester %s\n",ftest.f7(dest, argument[3]));
printf(" chaine dest %s et fin chaine %s\n",dest, &dest[i+1]);
}	

void aff8(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	int i,j,k;
	char *dest;
	char *dest2;
	size_t	n;

	if (nb <=3)
	{
		printf("Il manque des arguments");
		return;
	}
	n = atoi(argument[4]);
	i = strlen(argument[2]);
	j = strlen(argument[3]);
	dest = (char *) malloc(sizeof(char)*(i+j+4));
	dest2 = strcpy(dest, argument[2]); dest[i+j+3] = '\0'; for (k=i+1; k<i+j+3; k++) dest[k]='1';	   
printf(" chaine dest %s et fin chaine %s\n",dest, &dest[i+1]);
	if (fref.f8 != NULL)
		printf("resultat control %s\n",fref.f8(dest, argument[3],n));
printf(" chaine dest %s et fin chaine %s\n",dest, &dest[i+1]);
	dest2 = strcpy(dest, argument[2]); dest[i+j+3] = '\0'; for (k=i+1; k<i+j+3; k++) dest[k]='1';	   
printf(" chaine dest %s et fin chaine %s\n",dest, &dest[i+1]);
	printf("resultat a tester %s\n",ftest.f8(dest, argument[3],n));
printf(" chaine dest %s et fin chaine %s\n",dest, &dest[i+1]);
}	

void aff9(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	char	*dest,*dest2;
	int		i,j,k;
	size_t  bn;

	if (nb <=4)
	{
		printf("Il manque des arguments");
		return;
	}
	i = strlen(argument[2]);
	j = strlen(argument[3]);
	bn = atoi(argument[4]);
	dest = (char *) malloc(sizeof(char)*(i+j+4));
	if (dest == NULL)
		return;
	dest2 = strcpy(dest, argument[2]); dest[i+j+3] = '\0'; for (k=i+1; k<i+j+3; k++) dest[k]='1';	   
printf("chaine dest %s  fin chaine %s\n,source %s et nbre %ld\n",dest, &dest[i+1],argument[3],bn);
	if (fref.f9 != NULL)
		printf("resultat control %ld\n",fref.f9(dest,argument[3],bn));
printf("chaine dest %s  fin chaine %s\n",dest, &dest[i+1]);
	dest2 = strcpy(dest, argument[2]); dest[i+j+3] = '\0'; for (k=i+1; k<i+j+3; k++) dest[k]='1';	   
printf("chaine dest %s  fin chaine %s\n",dest, &dest[i+1]);
	printf("resultat a tester %ld\n",ftest.f9(dest,argument[3],bn));
printf("chaine dest %s  fin chaine %s\n",dest, &dest[i+1]);
}	

void aff10(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	size_t i;

	if (nb <=3)
	{
		printf("Il manque des arguments");
		return;
	}
	i = atoi(argument[2]);
	if (fref.f10 != NULL)
		printf("resultat control %d\n",fref.f10(argument[2],argument[3],i));
	printf("resultat a tester %d\n",ftest.f10(argument[2],argument[3],i));
}	

void aff11(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	int i;
	if (nb <=2)
	{
		printf("Il manque des arguments");
		return;
	}
	i = atoi(argument[2]);
	if (fref.f11 != NULL)
		printf("resultat control %d\n",fref.f11(i));
	printf("resultat a tester %d\n",ftest.f11(i));
}	

void aff12(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	size_t	i;
	if (nb <=4)
	{
		printf("Il manque des arguments");
		return;
	}
	i = atoi(argument[4]);
	if (fref.f12 != NULL)
		printf("resultat control %s\n",fref.f12(argument[2],argument[3],i));
	printf("resultat a tester %s\n",ftest.f12(argument[2],argument[3],i));
}	

void aff13(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	int i;
	if (nb <=3)
	{
		printf("Il manque des arguments");
		return;
	}
	i = atoi(argument[3]);
	if (fref.f13 != NULL)
		printf("resultat control %s\n",fref.f13(argument[2],i));
	printf("resultat a tester %s\n",ftest.f13(argument[2],i));
}	

void *ini_mem(char	*str, size_t len)
{
	char *dst;
	void *dest;
	char  *fin;

	dst = (char *)malloc(sizeof(char) * len);
	if (dst == NULL)
		return (NULL);
	dest = strcpy(dst,str);
	fin = dest;
	fin[len-1] = '\0';
	fin[len-2] = 'F';
	return (dest);
}

void	impg(char *titre, void *str,int j,size_t len)
{
	size_t  i;
	char	c;
	char	*src;

	c = (char) j;
	src = str;
	printf ("%s",titre);
	if (str == NULL) {printf(" pointeur a NuLL \n");return;}
	printf (" car %c longueur %ld et chaine \nXXX%sXXX\n",c,len,src);
	if (c != '\0')
		return;
	i = 0;
	while (src[i] == c)
		i++;
    printf("%ld car %c et fin de chaine %s\n",i,c,&src[i]);
}

void	imp(void *str,int j,size_t len)
{
	size_t  i;
	char	c;
	char	*src;

	c = (char) j;
	src = str;
	printf (" car %c longueur %ld et chaine \nXXX%sXXX\n",c,len,src);
	i=0;
	while (src[i] == c)
		i++;
    printf("%ld car %c et fin de chaine %s\n",i,c,&src[i]);
}

void aff14(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	int j;
	size_t	i,k,len;
	void	*src;
	void	*dest;
	if (nb <=4)
	{
		printf("Il manque des arguments");
		return;
	}
	i = strlen (argument[2]);
	j = atoi(argument[3]);
	len = atoi(argument[4]);
	k = (i > len) ? i + 2 : len + 2;
	printf("resultat control:\n");
    src = ini_mem(argument[2],k);
	imp(src,j,len);
	dest = fref.f14(src,j,len);
	imp(dest,j,len);
	printf("resultat a tester \n");
    src = ini_mem(argument[2],k);
	imp(src,j,len);
	dest = ftest.f14(src,j,len);
	imp(dest,j,len);
}

void aff15(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	int j;
	size_t	i,k,len;
	void	*src;
	if (nb <=3)
	{
		printf("Il manque des arguments");
		return;
	}
	i = strlen (argument[2]);
	j = 0;
	len = atoi(argument[3]);
	k = (i > len) ? i + 2 : len + 2;
	printf("resultat control:\n");
    src = ini_mem(argument[2],k);
	imp(src,j,len);
	fref.f15(src,len);
	imp(src,j,len);
	printf("resultat a tester \n");
    src = ini_mem(argument[2],k);
	imp(src,j,len);
	ftest.f15(src,len);
	imp(src,j,len);
}	

void aff16(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	size_t	i,j,k,len;
	void	*src;
	void	*dest1;
	void	*dest2;
	if (nb <=4)
	{
		printf("Il manque des arguments");
		return;
	}
	src = argument[3];
	i = strlen (argument[2]);
	j = strlen (argument[3]);
	len = atoi(argument[4]);
	k = (i > len) ? i + 2 : len + 2;
	printf("resultat control:\n");
    dest1 = ini_mem(argument[2],k);
	imp(dest1,0,len);
	dest2 = fref.f16(dest1,src,len);
	if (dest1 != dest2) imp(dest1,0,len);
	imp(dest2,0,len);
	printf("resultat a tester \n");
    dest1 = ini_mem(argument[2],k);
	imp(dest1,0,len);
	dest2 = ftest.f16(dest1,src,len);
	if (dest1 != dest2) imp(dest1,0,len);
	imp(dest2,0,len);
}

void aff17(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	size_t	i,j,k,len;
	int		c;
	void	*src;
	void	*dest1;
	void	*dest2;
	if (nb <=5)
	{
		printf("Il manque des arguments");
		return;
	}
	src = argument[3];
	i = strlen (argument[2]);
	j = strlen (argument[3]);
	c = atoi(argument[4]);
	len = atoi(argument[5]);
	k = (i > len) ? i + 2 : len + 2;
    dest1 = ini_mem(argument[2],k);
	impg("\nparametres en entre\n",src,c,len);
	impg("resultat control:\nchaine resultat avant:",dest1,c,len);
	dest2 = fref.f17(dest1,src,c,len);
	impg("resultat control:\nchaine resultat apres ptr en arg",dest1,c,len);
	impg("resultat control:\nchaine resultat apres ptr en sortie",dest2,c,len);
    dest1 = ini_mem(argument[2],k);
	impg("resultat test:\nchaine resultat avant:",dest1,c,len);
	dest2 = ftest.f17(dest1,src,c,len);
	impg("resultat test:\nchaine resultat apres ptr en arg",dest1,c,len);
	impg("resultat test:\nchaine resultat apres ptr en sortie",dest2,c,len);
}

void aff18(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	size_t	i,j,k,len;
	int		decal,sind,dind;
	char	*args;
	void	*src;
	void	*dest1;
	void	*dest2;
	if (nb <=5)
	{
		printf("Il manque des arguments");
		return;
	}
	i = strlen (argument[2]);
	j = strlen (argument[3]);
	len = atoi(argument[4]);
	decal= atoi(argument[5]);
	dind = (decal >= 0) ? decal:0;
	sind= dind - decal;
	k = i+j+len+dind+sind+1;
	args =(char *) malloc(sizeof(char)*k);
	dest1 = strcpy(&args[dind],argument[2]); args[dind+i] = ' ';
	src = strcpy(&args[sind],argument[3]); args[sind+j] = ' ';
	args[k-1] = '\0'; 
	printf(" dest DDD%sDDD et source SSS%sSSS\n",&args[dind],&args[sind]);
	printf ("Appel fonction initial\n");
	dest2 = fref.f18(dest1,src,len);
	printf("resultat dest DDD%sDDD et source SSS%sSSS\n",(char *)dest2,&args[sind]);
	dest1 = strcpy(&args[dind],argument[2]); args[dind+i] = ' ';
	src = strcpy(&args[sind],argument[3]); args[sind+j] = ' ';
	args[k-1] = '\0'; 
	printf(" dest DDD%sDDD et source SSS%sSSS\n",&args[dind],&args[sind]);
	printf ("Appel fonction teste\n");
	dest2 = ftest.f18(dest1,src,len);
	printf("resultat dest DDD%sDDD et source SSS%sSSS\n",(char *)dest2,&args[sind]);
}

void aff19(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	size_t	i,k,len;
	int		c;	
	char	*args;
	void	*s;
	if (nb <=4)
	{
		printf("Il manque des arguments");
		return;
	}
	i = strlen (argument[2]);
	c = atoi(argument[3]);
	len = atoi(argument[4]);
	k = (i>=len)?i+4:len+4;

	args =(char *) malloc(sizeof(char)*k);
	s = strcpy(args,argument[2]); args[i] = ' ';args[k-2] = 'F'; args[k-1] = '\0'; 
	printf("Parametre: chaine XXX%sXXX, car X%cX et longueur %ld\n\n",args,c,len);
    printf(" resultat reference XXX%sXXX\n ",(char *)fref.f19(s,c,len));
    printf(" resultat test  XXX%sXXX\n",(char *)ftest.f19(s,c,len));
}

void aff20(t_ptf fref,t_ptf ftest, char *argument[], int nb)
{
	size_t	i1,i2,k,len;
	char	*cs1;
	char	*cs2;
	void	*s1,*s2;;
	if (nb <=4)
	{
		printf("Il manque des arguments");
		return;
	}
	i1 = strlen (argument[2]);
	i2 = strlen (argument[3]);
	len = atoi(argument[4]);
	k = (i1+i2>=len)?i1+i2+4:len+4;

	cs1 =(char *) malloc(sizeof(char)*k);
	cs2 =(char *) malloc(sizeof(char)*k);
	s1 = strcpy(cs1,argument[2]); cs1[k-2] = 'F'; cs1[k-1] = '\0'; 
	s2 = strcpy(cs2,argument[3]); cs2[k-2] = 'F'; cs2[k-1] = '\0'; 
	printf("Parametre: chaine1 XXX%sXXX, chaine2 XXX%sXXX, et longueur %ld\n\n",cs1,cs2,len);
    printf(" resultat reference %d\n ",fref.f20(s1,s2,len));
    printf(" resultat test %d\n ",ftest.f20(s1,s2,len));
}
int main(int argc, char *argv[])
{
	t_fonc 	*str;
	int i,j;
	tf_aff	aff[21] = {&aff0,&aff1,&aff2,&aff3,&aff4,&aff5,&aff6,&aff7,&aff8,&aff9,aff10,aff11,aff12,&aff13,&aff14,&aff15,&aff16,&aff17,&aff18,&aff19,&aff20};

	if (argc < 2) return (-1);
	printf("teste \n");
	str=init(&i);

	j=recherche(argv[1],str,i);
	if (j>= i)
	{
		printf("fonction %s non testee", argv[1]);
		return (2);
	}
	printf("test  %s  \n",str[j].nom);
	aff[str[j].tyfonc](str[j].fonc_ref, str[j].fonc_ft, argv, argc);
	
	return(0);
}
