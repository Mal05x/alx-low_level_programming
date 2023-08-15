#include "main.h"

/**
 * times_table - the main function
 */
void times_table(void)
{
	int i;
	int j = 9;

	for (i = 0; i <= 81; i++)
	{
		if (i == 81)
		{
			continue;
		}
		else
		{
		_putchar((i * j) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		}
	}
}
