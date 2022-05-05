/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:27:47 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/05 18:03:43 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;

	char *temp = (char *) s;
	x = 0;
	while (temp[x])
	{
		if (temp[x] == c)
			break;
		x++;
	}
	if (temp[x])
		return &temp[x];
	else
		return NULL;
}

