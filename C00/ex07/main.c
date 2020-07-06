#include <stdio.h>
void ft_putnbr(int nb);

int	main(void)
{
	int number;
	
	number = 0;
	printf(": ");
	scanf("%d", &number);
	ft_putnbr(number);
}
