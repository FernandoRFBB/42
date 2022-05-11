/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:22:59 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/05 18:09:34 by fbittenc         ###   ########.fr       */
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

//	char strSTRLCPY_P[20] = "AAAAAAAAAA";
//	char strSTRLCPY_M[20] = "AAAAAAAAAA";

//	size_t STRL_P = strlcpy(strSTRLCPY_P, str, 4);
//	size_t STRL_M = ft_strlcpy(strSTRLCPY_M, str, 4);
//	printf("STRLCPY P: %s || %ld\n", strSTRLCPY_P, STRL_P);
//      printf("STRLCPY M: %s || %ld\n", strSTRLCPY_M, STRL_M);
//    printf("---------------------------------------------------------\n");
	return (0);
}
