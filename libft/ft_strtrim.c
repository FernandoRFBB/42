/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:02:54 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/18 17:30:28 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int checkTrim(char c, char const *set)
{
	size_t	setLen;
	size_t	x;
	char	*del;

	setLen = ft_strlen(set);
	del = (char *) set;
	x = 0;
	while (x < setLen)
	{
		if (c == del[x])
			return (1);
		x++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	
	if (!s1)
		return (NULL);
	start = 0;
	str = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	str = (char *) s1;
	while (start < ft_strlen(s1))
	{
		if (checkTrim(str[start], set) == 0)
			break;
		start++;
	}
	end = ft_strlen(s1);
	while (end > start)
	{
		if (checkTrim(str[end - 1], set) == 0)
			break;
		end--;
	}
	return (ft_substr(str + start, 0, end - start));
}

