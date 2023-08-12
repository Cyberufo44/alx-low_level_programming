#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that prints in lower, upper case then new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
for (letter = 'A'; letter <= 'z'; letter++)
	puchar(letter);
putchar('\n');
return (0);
}
