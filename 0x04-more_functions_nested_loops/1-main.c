#include "main.h"
#include <stdio.h>

int main(void)
{
    char c;

    c = '5'; /* Test with the character '5' */
    if (_isdigit(c))
    {
        printf("%c is a digit.\n", c);
    }
    else
    {
        printf("%c is not a digit.\n", c);
    }

    c = 'A'; /* Test with the character 'A' */
    if (_isdigit(c))
    {
        printf("%c is a digit.\n", c);
    }
    else
    {
        printf("%c is not a digit.\n", c);
    }

    return (0);
}

