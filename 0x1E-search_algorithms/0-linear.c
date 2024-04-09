#include "search_algos.h"

/**
 * sequential_search - examines each element in a list in order,
 *                     searching for a target value.
 * @array: pointer to the first element of the array
 * @size: number of elements in an array
 * @value: value to search for
 * Return: index of value || -1 if not found
 */

int sequential_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* Ascertain if the input array is NULL */
	if (array == NULL)
		return (-1);

	/* Traverse through the array */
	for (i = 0; i < size; i++)
	{
		/* Display the comparison being made */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* If the value is found, return the index */
		if (array[i] == value)
			return (i);
	}
	/* Value is not located in the array */
	return (-1);
}

