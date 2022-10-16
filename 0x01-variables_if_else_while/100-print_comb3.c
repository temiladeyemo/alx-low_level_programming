#include <stdio.h>
/**
 *main - entry point
 *Return: always return 0 (success)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = num1 + 1; num2 < 58; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 56 && num2 != 58)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
