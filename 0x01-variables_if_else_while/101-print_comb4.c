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
	int p;

	for (c = 0 ; c < 10 ; c++)
	{
		for (a = 1 ; a < 10 ; a++)
		{
			for (p = 2 ; p < 10 ; p++)
			{
				if (c < a && c != a)
				{	putchar (c + '0');
					putchar(a + '0');
					putchar(p + '0');
					if (c + a + p != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
