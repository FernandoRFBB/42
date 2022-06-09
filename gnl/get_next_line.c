
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *str_join(char *s1, char *s2)
{
	int		x;
	int		y;
	char	*str;
	
	x = 0;
	y = 0;
	while (s2[x])
		x++;
	while (s1[y])
		y++;
	str = malloc(sizeof(char *) * (x + y));
	x = 0;
	while (s1[x])
	{
		str[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y])
	{
		str[x + y] = s2[y];
		y++;
	}
	str[x + y] = '\0';
	return (str);
}

int check_end_of_line(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == '\n')
			return (x);
		x++;
	}
	return (-1);
}

char *get_next_line(int fd)
{
	static int	start_line;
	static char	*str_last;
	char		*str_buffer;
	char		*str_return;
	int bfsize = 4;

	str_last = "";
	str_return = "";
	start_line = -1;
	while (start_line == -1)
	{
		str_buffer = malloc(sizeof(char *) * bfsize);
		read(fd, str_buffer, bfsize);
		start_line = check_end_of_line(str_buffer);
		if (start_line == -1)
		{
			str_return = str_join(str_return, str_buffer);
			free(str_buffer);
		}
	}
	str_last = malloc(sizeof(char *) * bfsize);
	str_return = str_join(str_return, str_split(
	return (str_return);
}

int main(void)
{
	int fd = open("teste", O_RDONLY);
	printf("FD: %d\n", fd);	

	printf("Teste: %s\n", get_next_line(fd));
	printf("FD: %d\n", fd);
	printf("Teste: %s\n", get_next_line(fd));
}
