#include <stdio.h>

/**
 * main - the main function
 * Return: always 0
 */
int main(void)
{
	char hex[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
