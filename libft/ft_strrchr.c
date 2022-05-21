/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:54:54 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/17 18:02:02 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	x;
	size_t	len;
	char	*temp;

	temp = (char *) s;
	x = 0;
	len = ft_strlen(temp);
	while ((int)len >= 0)
	{
		if (temp[len] == c)
			return (&temp[len]);
		len--;
	}
	return (NULL);
}

