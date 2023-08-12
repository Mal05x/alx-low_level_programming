#include <stdio.h>

/**
 * main - this is the main function
 * Return: always 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int j;

	for (j = 0; j < 26; j++)
	{
		int i;

		if (i != 5 && i != 17)
		{
		putchar(alphabet[j]);
		}
	}
	putchar('\n');
	return (0);
}
