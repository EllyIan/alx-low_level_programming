#include "stdio.h"

/**
 *print_array - function that prints n elements of an array of integers ,
 *followed by a new line
 *
 * @a: is the input array
 * @n: is the length of the array
 */

void print_array(int *a, int n)
{
int index_of_array;

printf("int array[%d] = { ", n);
for (index_of_array = 0; index_of_array < n; index_of_array++)
{
printf("%d", a[index_of_array]);
if (index_of_array != (n - 1))
{
printf(",");
}
}
printf(" };\n");
}
