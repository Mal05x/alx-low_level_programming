#include <stdio.h>

/**
 * main - the main function
 * Return: always 0
 */
int main(void)
{
	int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}