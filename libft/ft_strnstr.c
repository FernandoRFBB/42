/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:58:36 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/12 17:53:55 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	char *str;
	char *find;

	x = 0;
	str = (char *) haystack;
	find = (char *) needle;
	if (find[0] == '\0')
		return (str);

	while (str[x] && x < len + 1 - ft_strlen(needle))
	{
		if (str[x] == find[0])
		{
			if (ft_strncmp(str + x, find, ft_strlen(needle)) == 0)
				return (str + x);
		}
		x++;
	}
	return (NULL);
}
