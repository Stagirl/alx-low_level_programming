#include "main.h"

/**
 * _puts - prints a string
 * @str: The string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\O'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
