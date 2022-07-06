#include "main.h"

/**
* print_alpahabet - prints the alphabet.
*
* Description: prints the alphabet, in lowercase, followed by a new line.
* Return: 0 (success)
*/

void print_alphabet(void)
{
  
  char alpha;
  
  for (alpha = 'a'; alpha <= 'z'; alpha++)
    _putchar(alpha);
  _putchar('\n');
}
