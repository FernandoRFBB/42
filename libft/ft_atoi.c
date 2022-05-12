/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:54:08 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/12 18:31:47 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isspace(int c)
{
    if (c == '\t' || c == '\n' || c == '\v' || c == '\f' ||
        c == '\r' || c == ' ')
    {
		return (1);
	}
	else
	{
		return (0);
	}
}

int ft_atoi(const char *str)
{
	int	x;
	int answer;
	char *temp;

	x = 0;
	answer = 0;
	temp = (char *) str;
	while (str[x])
	{
		if (ft_isalpha(str[x]) != 0 || ft_isspace(str[x]) != 0)
			break;
		answer = answer * 10 + str[x] - 48;
		x++;
	}
	return (answer);
}

