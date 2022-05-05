/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:54:54 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/05 18:04:06 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int	x;
	int	size;

	temp = (char *) s;
	size = 0;

	while (temp[size])
		size++;
	x = size;
	while (temp[x - 1])
	{
		if (temp[x - 1] == c)
			break;
		x--;
	}
	if (x == 0)
		return NULL;
	else
		return &temp[x - 1];
}

