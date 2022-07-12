#include "main.h"

/**
 * _puts - prints string passed as a param followed by a new line
 * @str: string to be printed to the std output
 * Return: void
 */

void _puts(char *str)
{
	do {
		_putchar(*str);
	} while (*str++)

	_putchar('\n');
}
