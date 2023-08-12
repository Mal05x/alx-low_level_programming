#include <stdio.h>

/**
 * main - this is the main function
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
		putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
