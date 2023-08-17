#include "main.h"

/**
 * _isdigit - Check if a character ina program is a digit
 * @s: The number to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */

int _isdigit(int s)

{
	if (s >= 48 && s <= 57)
	{
		return (1);
	}
	return (0);
}
