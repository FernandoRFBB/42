
#include <ctype.h>
#include <stdio.h>
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (2);
	}
	return 0;
}

int main(void)
{
	printf("Teste : %d\n", ft_isalpha('a'));
	printf("Padrao: %d\n", isalpha('a'));
}
