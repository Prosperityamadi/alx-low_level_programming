#include <stdio.h>

/**
 * main - prints Alphabets in lowercase and uppercase
 *
 * Return:0 ends the program
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	for (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
