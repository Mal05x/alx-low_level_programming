#include "main.h"

/**
 * print_array - the main function
 * @a: first pointer
 * @n: second pointer
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
