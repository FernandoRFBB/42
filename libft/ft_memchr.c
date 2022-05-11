/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:11:44 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/11 19:33:41 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t x;
	unsigned char *temp;

	x = 0;
	temp = (unsigned char *) s;
	while (x < n)
	{
		if (temp[x] == c)
			return (temp + x);
		x++;
	}
	return (NULL);
}
