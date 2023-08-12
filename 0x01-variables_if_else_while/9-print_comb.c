#include <stdio.h>

/**
 * main - the main function
 * Return: always 0
 */
int main(void)
{
	char num[28] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
	int i;

	for (i = 0; i < 28; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
