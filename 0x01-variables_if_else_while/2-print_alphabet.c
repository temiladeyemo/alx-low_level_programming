#include <stdio.h>

/**
 *main - entry point for codes
 *Return: always return 0
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar("\n");
	return (0);
}
