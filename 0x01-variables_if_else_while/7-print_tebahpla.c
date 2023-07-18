#include <stdio.h>

/**
 * main - main function
 *
 * Return:0 stops the program
 *
 */

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
