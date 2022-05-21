/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:32:11 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/17 16:57:25 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t	x;
	char *temp;

	x = 0;
	temp = (char *) b;
	while (x < len)
	{
		temp[x] = c;
		x++;
	}
	return (b);
}
