#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet 10x
 */
int main()
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			printf("%c", j);
		}
		printf("\n");
	}
	return (0);
}
