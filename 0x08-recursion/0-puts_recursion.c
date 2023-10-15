#include <stdio.h>

/**
 * _puts_recursion - Prints a string using recursion, followed by a new line.
 * @s: The input string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        putchar('\n');  /* Print a newline when the end of the string is reached */
        return;
    }

    putchar(*s);         /* Print the current character */
    _puts_recursion(s + 1);  /* Recursively call the function with the next character */
}

int main()
{
    char str[] = "Hello, World!";
    _puts_recursion(str);
    return (0);
}

