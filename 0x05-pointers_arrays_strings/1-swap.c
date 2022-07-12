#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to swap ints value
 * @b: second integer to swap its value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
