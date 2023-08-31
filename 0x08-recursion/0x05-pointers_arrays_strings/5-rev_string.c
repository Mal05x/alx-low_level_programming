#include "main.h"

/**
 * rev_string - the main function
 * @s: the pointer
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char k;

	while (s[j++])
	{
		i++;
	}
	for (j = i - 1; j >= i / 2; j--)
	{
		k = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = k;
	}
}

