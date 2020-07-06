#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int a_int;
	int b_int;

	a_int = 30;
	b_int = 3;
	a = &a_int;
	b = &b_int;
	printf("a_int:%d, b_int:%d\n", a_int, b_int);
	ft_ultimate_div_mod(a, b);
	printf("a_int:%d, b_int:%d\n", a_int, b_int);
}
