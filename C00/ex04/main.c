#include <stdio.h>

void	ft_is_negative(int);

int	main(void)
{
	int num;

	num=0;
	printf(": ");
	scanf("%d", &num);
	ft_is_negative(num);
}
