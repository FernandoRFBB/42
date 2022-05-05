/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:29:59 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/05 19:12:10 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *empty;
    char *str;
    int x;
    
    empty = (char *) dest;
    str = (char *) src;
    x = 0;
    
    while (x < n)
    {
        empty[x] = str[x];
        x++;
    }
    
}

