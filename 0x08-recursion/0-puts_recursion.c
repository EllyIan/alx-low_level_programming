#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 *
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n'); /* Print a newline when the end of the string is reached */

return;
}

putchar(*s);  /* Print the current character */
s++;
_puts_recursion(s); /* Recursively call the function with the next character */
}
