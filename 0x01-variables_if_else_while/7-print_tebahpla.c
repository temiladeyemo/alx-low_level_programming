#include <stdio.h>
/**
 *main - Entry point
 *Return: returns 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
