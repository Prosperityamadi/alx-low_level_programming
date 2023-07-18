#include <stdio.h>

/**
 * main - main function
 *
 * Return:0 ends the program
 *
 */

int main(void)
{
	int c;
	int a;

	for (c = 0; c < 10; c++)
	{
		for (a = 1; a < 10; a++)
		{
			if (c < a && c != a)
			{
				putchar (c + '0');
				putchar(a + '0');
				if (c + a != 17)
				{
				putchar(',');
					putchar(' ');

				}

			}
		}
	}
	putchar ('\n');
	return (0);
}
