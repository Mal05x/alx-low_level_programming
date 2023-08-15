#include "main.h"

/**
 * main - the main function
 * Return: always 0
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 59; i++)
	{
		for (j = 0; j <=23; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
		return (0);
	}
}
