#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("Teste : %d\n", ft_isdigit(14));
	printf("Padrao: %d\n", isdigit(14));
}
