#include <stdio.h>
/**
 * main - Prints the size of various typeson the computer it is compiled and run on
 *
 * Return - 0 (Success)
 */
int main(void)
{

	char i;
	int a;
	long int b;
	long long int c;
	float d;

	printf("Size of a char: %lu byte(s)\n" ,(unsigned long)sizeof(i));
	printf("Size of an int: %lu byte(s)\n" ,(unsigned long)sizeof(a));
	printf("Sixe of a long int: %lu byte(s)\n" ,(unsigned long)sizeof(b));
	printf("Sixe of a long long int: %lu byte(s)\n" ,(unsigned long)sizeof(c));
	printf("Sixe of a float: %lu byte(s)\n" ,(unsigned long)sizeof(d));
}

