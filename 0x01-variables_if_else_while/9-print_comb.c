#include <stdio.h>

/**
 * main - the main function
 * Return: always 0
 */
int main(void)
{
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;
	int z = sizeof(num);


	for (i = 0; i < z; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
