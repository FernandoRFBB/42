/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:55:52 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/17 19:37:01 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	char	*temp;
	char	*answer;

	x = 0;
	y = 0;
	temp = (char *) s1;
	answer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!answer)
		return (NULL);
	while (x < ft_strlen(s1))
	{
		answer[x] = temp[x];
		x++;
	}
	temp = (char *) s2;
	while (y < ft_strlen(s2))
	{
		answer[x] = temp[y];
		x++;
		y++;
	}
	answer[x] = '\0';
	return (answer);
}
