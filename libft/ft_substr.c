/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:51:02 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/17 19:34:34 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	char	*temp;
	char	*answer;

	x = 0;
	answer = malloc(sizeof(char) * len + 1);
	if (!answer)
		return (NULL);
	if ((size_t) start >= ft_strlen(s))
		return (answer);
	temp = (char  *) s + start;
	while (x < len)
	{
		answer[x] = temp[x];
		x++;
	}
	answer[x] = '\0';
	return (answer);
}
