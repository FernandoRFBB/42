/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:32:11 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/05 19:38:42 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset(void *b, int c, size_t len)
{
	int	x;
	char *str;

	x = 0;
	str = (char *) b;

	while (++x < len)
	{
		str[x] = c;
	}
	return (b);
}
