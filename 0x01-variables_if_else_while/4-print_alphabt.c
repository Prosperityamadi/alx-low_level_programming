#include <stdio.h>

/**
 * main - prints alphabets exepct two letters
 *
 * Return:0 stops program
 *
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c == 'q' || c == 'e')
			continue;
		else
			putchar(c);
	putchar('\n');
	return (0);
}

