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
	char a;

	for (c = 0 ; c < 10 ; c++)
		putchar(c + '0');
	for (a = 'a' ; a <= 'f' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
