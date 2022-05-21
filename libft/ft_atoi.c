/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:54:08 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/17 19:26:28 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isspace(int c)
{
    if (c == '\t' || c == '\n' || c == '\v' || c == '\f' ||
        c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int ft_atoi(const char *str)
{
	int	x;
	int signal;
	int answer;
	char *temp;

	x = 0;
	answer = 0;
	signal = 1;
	temp = (char *) str;
	while (ft_isspace(temp[x]))
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			signal = -1;
		x++;
	}
	while (ft_isdigit(str[x]))
	{
		answer = answer * 10 + str[x] - 48;
		x++;
	}
	return (answer * signal);
}

