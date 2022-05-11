/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:29:29 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/05 18:29:37 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *empty;
    char *str;
    size_t x;
    
    empty = (char *) dest;
    str = (char *) src;
    x = 0;
    
    while (x < n)
    {
        empty[x] = str[x];
        x++;
    }
    return (dest);
}

