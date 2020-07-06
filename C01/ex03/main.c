#include <stdio.h>

void	ft_div_mod(int, int, int*, int*);

int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	int div_;
	int mod_;

	div = &div_;
	mod = &mod_;
	a = 20;
	b = 10;
	ft_div_mod(a, b, div, mod);

	printf("div:%d\nmod:%d\n", *div, *mod);
}
