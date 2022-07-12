#include "main.h"

/**
 * print_rev - prints a string in a reverse order, followed by a new line
 * @s: string to reverese
 * Return: void
 */

void print_rev(char *s)
{
	int index;
	int len = _strlen(*s);

	for (index = len - 1; index >= 0; index--)
		_putchar(*s[index]);
	_putchar('\n');
}
