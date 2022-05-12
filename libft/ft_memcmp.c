/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:47:24 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/12 17:24:50 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	x;
	char *temp1;
	char *temp2;

	x = 0;
	temp1 = (char *) s1;
	temp2 = (char *) s2;
	while ((temp1[x] || temp2[x]) && x < n)
	{
		if (temp1[x] != temp2[x])
			return (temp1[x] - temp2[x]);
		x++;
	}
	return (0);
}
