/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:21:22 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/17 18:29:19 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	int	x;
	char	*temp;
	char	*answer;

	x = 0;
	temp = (char *) s1;
	answer = malloc(sizeof(char) * ft_strlen(temp) + 1);
	if (!answer)
		return (NULL);
	while (temp[x])
	{
		answer[x] = temp[x];
		x++;
	}
	answer[x] = '\0';
	return (answer);
}

