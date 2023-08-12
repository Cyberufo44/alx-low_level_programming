#include <stdio.h>

/**
 * main - program that prints in lower, upper case then new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (i = 'A'; i <= 'z'; i++)
puchar(i);
putchar('\n');
return (0);
}
