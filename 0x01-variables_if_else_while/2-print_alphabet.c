#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return:0 stops the program
 *
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

