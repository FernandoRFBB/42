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

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
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

