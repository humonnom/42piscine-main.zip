#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int arr[8] = {5, 6, 3, 7, 9, 2, 8, 0};
	int i;
	i = 0;
	while (i < 8)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(arr, 8);
	i = 0;
	while (i < 8)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
}
