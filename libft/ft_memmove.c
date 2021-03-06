/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:29:59 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/17 17:30:38 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *empty;
    char *str;
    size_t x;
    
    empty = (char *) dest;
    str = (char *) src;
    x = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
    while (x < n)
    {
        empty[x] = str[x];
        x++;
    }
    return (dest);    
}
