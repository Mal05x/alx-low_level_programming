#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i, j;
	j = 0;

	for (i = 0; i <= 89; i++)
	{
			if (i <= 9)
			{
				putchar((j + i) + '0');
			}
			else
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
			}
	}
	return (0);
}

