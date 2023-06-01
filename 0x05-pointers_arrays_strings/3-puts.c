#include "main.h"

/**
* _puts - a function that prints string
*@str: points to the string
*Return:string and new line
*/


void _puts(char *str)
{
int i = 0;

while (str[i])
{
putchar(str[i]);
i++;
}
_putchar('\n');
}

