#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
	{
		return (2);
	}
	return (0);
}

int	main(void)
{
	printf("Teste : %d\n", ft_isalnum('A'));
	printf("Padrao: %d\n", isalnum('3'));
}
