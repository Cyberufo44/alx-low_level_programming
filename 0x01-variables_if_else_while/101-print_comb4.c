#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, s, d;

	for (a = 0; a < 8; a++)
	{
		for (s = a + 1; s < 9; s++)
		{
			for (d = s + 1; d < 10; d++)
			{
				putchar((a % 10) + '0');
				putchar((s % 10) + '0');
				putchar((d % 10) + '0');

				if (a == 7 && s == 8 && d == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
