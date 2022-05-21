/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:50:03 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/21 15:46:43 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int getIntSize(unsigned int n, int isNegative)
{
	int	x;

	x = 0;
	if (n == 0 || n == -0)
		return (1);
	if (isNegative == 1)
		x++;
	while (n % 10 != 0 || n != 0)
	{
		n /= 10;
		x++;
	}
	return (x);
}

static void insertNumber(int intSize, unsigned int n, char *answer)
{
	if (n == 0 || n == -0)
	{
		answer[0] = '0';
		return;
	}
	while (intSize - 1 >= 0)
	{
		if (answer[0] == '-' && intSize - 1 == 0)
		{
			break;
		}
		answer[intSize - 1] = n % 10 + 48;
		n /= 10;
		intSize--;
	}
	return;
}

char *ft_itoa(int n)
{
	int	intSize;
	int	isNegative;
	unsigned int	nl;
	char	*answer;
	
	isNegative = 0;
	if (n < 0)
	{
		nl = n * -1;
		isNegative = 1;
	}
	else
		nl = (unsigned int) n;
	intSize = getIntSize(nl, isNegative);
	answer = malloc(sizeof(char) * (intSize + 1));
	if (answer == NULL)
		return (NULL);
	if (isNegative == 1)
	{
		answer[0] = '-';
		answer[intSize] = '\0';
	} 
	else
		answer[intSize + 1] = '\0';
	insertNumber(intSize, nl, answer);
	return (answer);
}

