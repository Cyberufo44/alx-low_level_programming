#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
return (0);
}
