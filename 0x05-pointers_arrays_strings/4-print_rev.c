#include "main.h"

/**
 * print_rev - prints a string in a reverse order, followed by a new line
 * @s: string to reverese
 * Return: void
 */

void print_rev(char *s)
{
	char *r_ptr = s;

	while (*(r_ptr + 1) != '\0')
		r_ptr++;

	while (r_ptr > s)
	{
		char *tmp = *r_ptr;
		*r_ptr-- = *s;
		*s++ = tmp;
		_putchar(*s);
	}

	_putchar('\n');
}
