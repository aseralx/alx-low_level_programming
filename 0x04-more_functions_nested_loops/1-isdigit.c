#include "main.h"

/**
 * _isdigit - check if the word is digit
 * @x: what ever
 *
 * Return: 1 if the word is digit 0 if it is not
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}
