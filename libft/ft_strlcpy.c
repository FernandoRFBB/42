/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:29:56 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/17 18:24:28 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t x;

	x = 0;
	if (ft_strlen(src) + 1 < dstsize)
	{
		while (src[x])
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	} else if (dstsize != 0)
	{
		while (x < dstsize - 1)
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (ft_strlen(src));
}
