#include <stdio.h>

/**
 * main - main function
 *
 * Return:0 stops the program
 *
 */

int main(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
