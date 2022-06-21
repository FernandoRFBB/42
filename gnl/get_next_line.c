#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char	*ft_strdup(char *str)
{
	int		x;
	char	*new_str;

	x = 0;
	if (str)
		new_str = malloc(sizeof(char) * (ft_strlen(str) + 1));
	else
		new_str = malloc(sizeof(char) * 1);
	while (str[x])
	{
		new_str[x] = str[x];
		x++;
	}
	new_str[x] = '\0';
	if (str)
		free(str);
	return (new_str);
}

int	check_eol (char *str)
{
	int	x;

	x = 0;
	while (BUFFER_SIZE > x)
	{
		if (str[x] == '\n')
			return (x);
		x++;
	}
	return (-1);
}

char *ft_strcat(char *s1, char *s2)
{
	int		i_s1;
	int		i_s2;
	char	*answer;

	i_s1 = 0;
	i_s2 = 0;
	answer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i_s1])
	{
		answer[i_s1] = s1[i_s1];
		i_s1++;
	}
	while (s2[i_s2])
	{
		answer[i_s1 + i_s2] = s2[i_s2];
		i_s2++;
	}
	answer[i_s1 + i_s2] = '\0';
	free(s1);
	return (answer);
}

char	*ft_strlcpy(char *s1, char *s2, int size)
{
	int		i_s1;
	int		i_s2;
	char	*answer;

	i_s1 = 0;
	i_s2 = 0;
	// Mais 2 por conta da posicao do \n e do retorno do find_eol
	answer = malloc(sizeof(char) * (ft_strlen(s1) + size + 1));
	while (s1[i_s1])
	{
		answer[i_s1] = s1[i_s1];
		i_s1++;
	}
	while (size >= i_s2)
	{
		answer[i_s1 + i_s2] = s2[i_s2];
		i_s2++;
	}
	answer[i_s1 + i_s2] = '\0';
	free(s1);
	return (answer);
}

char	*ft_divide(char *s1, int div)
{
	int		x;
	char	*str;

	x = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) - div));
	while (s1[x + div])
	{
		str[x] = s1[x + div];
		x++;
	}
	return (str);
}

char *get_next_line(int fd)
{
	//int			b_read;
	//int			find_eol;
	char		*answer;
	//char		*str_buffer;
	static char	*str_final;
	
	if (!str_final || str_final == NULL)
	{
		printf("Teste");
		str_final = malloc(1);
		str_final[0] = '\0';
	}

	answer = ft_strdup(str_final);
	/*b_read = 1;
	find_eol = -1;
	// Primeira parte funcionando
	str_buffer = malloc(sizeof(char) * BUFFER_SIZE);
	while (1)
	{
		b_read = read(fd, str_buffer, BUFFER_SIZE);
		find_eol = check_eol(str_buffer);
		if (b_read == 0 || find_eol != -1)
			break;
		answer = ft_strcat(answer, str_buffer);
	}	
	answer = ft_strlcpy(answer, str_buffer, find_eol);
	str_final = ft_divide(str_buffer, find_eol + 1);
	free(str_buffer);*/
	free(answer);
	printf("%d", fd);
	return (str_final);
}

int main(void)
{
	int fd = open("teste", O_RDONLY);

	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	//printf("%s", get_next_line(fd));
}
