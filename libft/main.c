/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:22:59 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/12 19:33:06 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	int n = 7;
	char *str = "Teste1239";
	char strP[50] = "GeeksForGeeks is for programming geeks.";
	char strM[50] = "GeeksForGeeks is for programming geeks.";

	printf("ISALPHA P: %d\n", isalpha(n));
	printf("ISALPHA M: %d\n", ft_isalpha(n));
	printf("---------------------------------------------------------\n");
	printf("ISDIGIT P: %d\n", isdigit(n));
        printf("ISDIGIT M: %d\n", ft_isdigit(n));
        printf("---------------------------------------------------------\n");
        printf("ISALNUM P: %d\n", isalnum(n));
	printf("ISALNUM M: %d\n", ft_isalnum(n));
	printf("---------------------------------------------------------\n");
        printf("ISASCII P: %d\n", isascii(n));
        printf("ISASCII M: %d\n", ft_isascii(n));
	printf("---------------------------------------------------------\n");
        printf("ISPRINT P: %d\n", isprint(n));
        printf("ISPRINT M: %d\n", ft_isprint(n));
        printf("---------------------------------------------------------\n");
        printf("STRLEN P: %ld\n", strlen(str));
	printf("STRLEN M: %ld\n", ft_strlen(str));
	printf("---------------------------------------------------------\n");

	memset(strP + 13, '.', 8*sizeof(char));
	ft_memset(strM + 13, '.', 8*sizeof(char));

        printf("MEMSET P: %s\n", strP);
	printf("MEMSET M: %s\n", strM);
	printf("---------------------------------------------------------\n");

	bzero(strP + 13, 8);
	ft_bzero(strM + 13, 8);
	printf("BZERO P: %s\n", strP);
	printf("BZERO M: %s\n", strM);
	printf("---------------------------------------------------------\n");

	char strMEMCPY_P[20] = "FFFFFFFFFFFFFFFFFFF";
	char strMEMCPY_M[20] = "FFFFFFFFFFFFFFFFFFF";
	memcpy(strMEMCPY_P, str, strlen(str));
	ft_memcpy(strMEMCPY_M, str, strlen(str));
	printf("MEMCPY P: %s\n", strMEMCPY_P);
	printf("MEMCPY M: %s\n", strMEMCPY_M);
	printf("---------------------------------------------------------\n");

	char strMEMMOVE_P[20] = "AAAAAAAAA";
	char strMEMMOVE_M[20] = "AAAAAAAAA";

	memmove(strMEMMOVE_P, str, strlen(str));
	ft_memmove(strMEMMOVE_M, str, strlen(str));
	printf("MEMMOVE P: %s\n", strMEMMOVE_P);
    printf("MEMMOVE M: %s\n", strMEMMOVE_M);
    printf("---------------------------------------------------------\n");

	char strSTRLCPY_P[20] = "AAAAAAAAAA";
	char strSTRLCPY_M[20] = "AAAAAAAAAA";
	size_t STRL_P = strlcpy(strSTRLCPY_P, str, 10);
	size_t STRL_M = ft_strlcpy(strSTRLCPY_M, str, 10);
	printf("STRLCPY P: %s || %ld\n", strSTRLCPY_P, STRL_P);
	printf("STRLCPY M: %s || %ld\n", strSTRLCPY_M, STRL_M);
	printf("---------------------------------------------------------\n");

	char s[15] = "0343";
    char x[40] = "Olasdf";
	char minha[40] = "Olasdf";

	printf("STRLCAT P: %zu\n", strlcat(x, s, 20));
	printf("S: %s || X: %s\n", s, x);
	printf("_-------------------------------_\n");
	printf("STRLCAT M: %zu\n", ft_strlcat(minha, s, 20));
	printf("S: %s || X: %s\n", s, x);
    printf("---------------------------------------------------------\n");
	
	char *a = "Teste123456";
	printf("MEMCHR\n");	
	printf("String: %s\n", a);
	printf("Resultado P: %s\n", memchr(a, '1', 10));
	printf("Resultado M: %s\n", ft_memchr(a, '1', 10));
	printf("---------------------------------------------------------\n");
	
	char up = 'f';
	printf("TOUPPER\n");
	printf("Char: %c\n", up);
	printf("Resultado P: %c\n", toupper(up));
	printf("Resultado M: %c\n", ft_toupper(up));
	printf("---------------------------------------------------------\n");
	
	char lower = 'F';
    printf("TOLOWER\n");
    printf("Char: %c\n", lower);
    printf("Resultado P: %c\n", tolower(lower));
    printf("Resultado M: %c\n", ft_tolower(lower));
	printf("---------------------------------------------------------\n");

	char *teste = "fernando.42.br";
	printf("STRCHR\n");
	printf("String: %s\n", teste);
	printf("Resultado P: %s\n", strchr(teste, '.'));
	printf("Resultado M: %s\n", ft_strchr(teste, '.'));
	printf("---------------------------------------------------------\n");
	
    printf("STRRCHR\n");
    printf("String: %s\n", teste);
    printf("Resultado P: %s\n", strrchr(teste, '.'));
    printf("Resultado M: %s\n", ft_strrchr(teste, '.'));
    printf("---------------------------------------------------------\n");
	
	char *teste2 = "ferNANDO";
	printf("STRNCMP\n");
    printf("String1: %s\n", teste);
	printf("String2: %s\n", teste2);
    printf("Resultado P: %d\n", strncmp(teste, teste2, 3));
    printf("Resultado M: %d\n", ft_strncmp(teste, teste2, 3));
    printf("---------------------------------------------------------\n");

	const void *teste3 = "ferNANDO.42.BR";
	const void *teste4 = "fernando";
    printf("MEMCMP\n");
    printf("String1: %s\n", teste3);
    printf("String2: %s\n", teste4);
    printf("Resultado P: %d\n", memcmp(teste3, teste4, 3));
    printf("Resultado M: %d\n", ft_memcmp(teste3, teste4, 3));
    printf("---------------------------------------------------------\n");

	const char *procurar = "teste123";
	const char *achar = "ste";

	printf("STRNSTR\n");
    printf("String: %s\n", procurar);
    printf("Achar: %s\n", achar);
    printf("Resultado P: %s\n", strnstr(procurar, achar, 5));
    printf("Resultado M: %s\n", ft_strnstr(procurar, achar, 5));
    printf("---------------------------------------------------------\n");

	const char *num = "42ba234";
	printf("ATOI\n");
	printf("String: %s\n", num);
	printf("Resultado P: %d\n", atoi(num));
	printf("Resultado M: %d\n", ft_atoi(num));
	printf("---------------------------------------------------------\n");

	char *recebe_p;
	char *recebe_m;
	
	recebe_p = strdup(procurar);
	recebe_m = ft_strdup(procurar);
    printf("STRDUP\n");
    printf("String: %s\n", num);
    printf("Resultado P: %s\n", recebe_p);
    printf("Resultado M: %s\n", recebe_m);

}
