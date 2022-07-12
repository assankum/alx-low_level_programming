#include "main.h"

/**
 * _puts - prints string passed as a param followed by a new line
 * @str: string to be printed to the std output
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
