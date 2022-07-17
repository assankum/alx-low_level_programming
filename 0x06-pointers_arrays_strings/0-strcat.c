#include "main.h"

/**
 * _strcat - funtion concatenates two strings
 * @dest: 1st string to cocatenate
 * @src: 2nd string to cocatenate
 * Return: a pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[len++] = src[i];

	return (dest);
}
