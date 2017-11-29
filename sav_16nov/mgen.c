#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	size_t   (*f8)(char *,const char *,size_t);
	char    *(*f15)(int);
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
	lstr = (t_fonc  *) malloc (11 * sizeof(t_fonc));

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
	lstr[6].tyfonc = 8 ;
	lstr[6].fonc_ref.f8 = &strlcpy;
	lstr[6].fonc_ft.f8  = &ft_strlcpy;

	lstr[7].nom = "strcat";
	lstr[7].tyfonc = 7 ;
	lstr[7].fonc_ref.f7 = &strcat;
	lstr[7].fonc_ft.f7  = &ft_strcat;

	lstr[8].nom = "strncat";
	lstr[8].tyfonc = 5 ;
	lstr[8].fonc_ref.f5 = &strncat;
	lstr[8].fonc_ft.f5  = &ft_strncat;

	lstr[9].nom = "strlcat";
	lstr[9].tyfonc = 8 ;
	lstr[9].fonc_ref.f8 = &strlcat;
	lstr[9].fonc_ft.f8  = &ft_strlcat;

	lstr[10].nom = "strstr";
	lstr[10].tyfonc = 6 ;
	lstr[10].fonc_ref.f6 = &strstr;
	lstr[10].fonc_ft.f6  = &ft_strstr;

	*nb = 11;
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
	if (nb <=3)
	{
		printf("Il manque des arguments");
		return;
	}
	if (fref.f7 != NULL)
		printf("resultat control %s\n",fref.f7(argument[2],argument[3]));
	printf("resultat a tester %s\n",ftest.f7(argument[2],argument[3]));
}	

void aff8(t_ptf fref,t_ptf ftest, char *argument[], int nb)
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
	if (fref.f8 != NULL)
		printf("resultat control %ld\n",fref.f8(dest,argument[2],k));
	printf(" chaine dest %s et fin chaine %s\n",dest, &dest[l+1]);
	for (i = 0; i < l+3; i++)
		dest[i] = '0' + i % 10;
	printf("resultat a tester %ld\n",ftest.f8(dest,argument[2],k));
	printf(" chaine dest %s et fin chaine %s\n",dest, &dest[l+1]);
}	

int main(int argc, char *argv[])
{
	t_fonc 	*str;
	int i,j;
	tf_aff	aff[9] = {&aff0,&aff1,&aff2,&aff3,&aff4,&aff5,&aff6,&aff7,&aff8};

	if (argc < 2) return (-1);
	printf("teste \n");
	printf("taille de l union %ld \n", sizeof(union u_reffonc));
	printf("taille de la structure %ld \n", sizeof(t_fonc));
	str=init(&i);

	j=recherche(argv[1],str,i);
	if (j>= i)
	{
		printf("fonction %s non testee", argv[1]);
		return (2);
	}
	printf("test  %s  \n",str[j].nom);
	/* aff0(str[j].fonc_ref, str[j].fonc_ft, argv);  */
	aff[str[j].tyfonc](str[j].fonc_ref, str[j].fonc_ft, argv, argc);

/*	printf("resultat    strcmp %d\nresultat ft_strcmp %d \n",strcmp(argv[1],argv[2]),ft_strcmp(argv[1],argv[2]));*/
	
	
	return(0);
}
