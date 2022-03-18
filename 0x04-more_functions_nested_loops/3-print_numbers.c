#include "main.h"

/**
 * print_numbers - Entry
 *
 * Description: prints the numbers  with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
