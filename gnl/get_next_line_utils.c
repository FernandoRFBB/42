#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	x;
	
	x = 0;
	while(str[x])
		x++;
	return (x);
}
