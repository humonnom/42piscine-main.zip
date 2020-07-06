#include <stdio.h>

void	ft_swap(int	*a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int a_int;
	int b_int;

	a_int = 3;
	b_int = 5;
	a = &a_int;
	b = &b_int;
	printf("a:%d b:%d\n", a_int, b_int);
	printf("Change...");
	ft_swap(a, b);
	printf("a:%d b:%d\n", a_int, b_int);
}
