#include <stdio.h> 
 
/**
 * main - main function
 * Return: 0
 */
int main(void)
{ 
	int i, j; 
 
    for (i = 0; i <= 89; i++)
    { 
	    for (j = 0; j <= 89; j++)
	    { 
	       	if (i != j)
		{ // check if digits are different
		       	putchar(i + '0');
		    putchar(j + '0');
		    putchar(',' + ' ');
		}
	    }
    }
    return 0;
}

