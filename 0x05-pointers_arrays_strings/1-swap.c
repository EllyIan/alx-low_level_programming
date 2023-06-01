#include "main.h"

/**
 *swap_int -swaps two variable integer(is a c function)
 *@a: swaps and stores adress of b
 *@b: swaps and stores adress of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
