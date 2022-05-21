/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:32:46 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/21 14:49:05 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *answer;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	answer = malloc(count * size);
	if (!answer)
		return (NULL);
	ft_bzero(answer, count * size);
	return (answer);
}

