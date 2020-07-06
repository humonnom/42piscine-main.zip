#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int i = 0;
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(arr, 10);
	while (i < 10)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
		i++;
	}
}
