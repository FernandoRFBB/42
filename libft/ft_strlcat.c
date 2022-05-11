/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:59:13 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/11 18:59:27 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	x;
	size_t len;

	x = 0;
	len = ft_strlen(dst);
	if (dstsize < len)
	{
		return (dstsize + ft_strlen(src));
	}
	while (x + len < dstsize - 1)
	{
		dst[len + x] = src[x];
		x++;
	}
	dst[len + x] = '\0';
	return (len + ft_strlen(src));
}
