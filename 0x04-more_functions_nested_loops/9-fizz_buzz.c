#include <stdio.h>

/**
 * main - the main function
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("Buzz Fizz");
		}
		else if ((i % 3) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
