/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:03:41 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/21 13:51:21 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int qty_substr(char *s, char c)
{
	size_t	x;
	int		answer;
	char	*str;
	
	x = 1;
	answer = 0;
	str = (char *) s;
	while (x < ft_strlen(s))
	{
		if (str[x] == c && str[x - 1] != c)
			answer++;
		x++;
	}
	if (str[x - 1] != c)
		answer++;
	return (answer);
}

static int clear_mem(char **answer)
{
	size_t	x;
	
	x = 0;
	while (answer[x])
	{
		free(answer[x]);
		x++;
	}
	free(answer);
	return (0);
}

//o x pode ser substituido por end_str
static int find_str(char *s, char c, char **answer, size_t qty_str)
{
	size_t	x;
	size_t	len;
	size_t	current_str;
	
	x = 0;
	len = 0;
	current_str = 0;
	while (current_str < qty_str)
	{
		if (s[x] == c || s[x] == '\0')
		{
			if (len != 0)
			{
				answer[current_str] = ft_calloc(len + 1, sizeof(char *));
				if (answer[current_str] == 0)
					return (clear_mem(answer));
				ft_strlcpy(answer[current_str], &s[x - len], len + 1);
				current_str++;
			}
			len = 0;
		} else
			len++;
		x++;
	}
	return (1);
}

char **ft_split(char const *s, char c)
{
	int		qty_str;
	int		check;
	char	**answer;
	char	*str;

	str = (char *) s;
	qty_str = qty_substr(str, c);
	answer = ft_calloc(qty_str + 1, sizeof(char **));
	if (answer == NULL)
		return (NULL);
	check = find_str(str, c, answer, qty_str);
	if (check == 0)
		return (NULL);
	return (answer);
}

int main(void)
{
	char const *str = "jan.fev.mar.abr.mai.jun.jul.ago.set.out.nov.dez";
	char **answer;
	answer = ft_split(str, '.');
	int x = 0;
	while (x < 12)
	{
		printf("Teste: %s\n", answer[x]);
		x++;
	}
}





