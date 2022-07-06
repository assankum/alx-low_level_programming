#include "main.h"

/**
* _islower - checks for lowercase character
* @c: character to be checked
*
* Description: accepts character as argument and checks if 
*              it is a lowercase character
* Return: 1 for success and 0 for failure
*/

int _islower(int c)
{
        if (c >= 'a' || c <= 'z')
                return (1);
        else
                return (0);
}
