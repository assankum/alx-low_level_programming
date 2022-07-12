#include "main.h"

/**
 * _strlen - returns the length to a string
 * @c: string to check its length
 * Return: length of string
 */

int _strlen(char *c)
{
	int len = 0, index = 0;

	while (c[index++])
		len++;

	return (len);
}
