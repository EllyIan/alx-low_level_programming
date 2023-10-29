#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0-9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1); /* The character is a digit */
    }
    else
    {
        return (0); /* The character is not a digit */
    }
}

