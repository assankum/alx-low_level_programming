#include "main.h"

/**
* _isalpha - checks if character is an alphabet
* @c: character to check
*
* Return: 1 for success and 0 for failure
*/

int _isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
      return (1);
    else
      return (0);
}
