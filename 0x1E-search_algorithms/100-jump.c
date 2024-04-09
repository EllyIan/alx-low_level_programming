#include "search_algos.h"

/**
 * jump_search - Performs a jump search on a sorted array.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value, 
 *         or -1 if not found.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump_step, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	/* Calculate jump step size (assuming a pre-sorted array) */
	jump_step = sqrt(size);

	/* Traverse the array with jumps */
	for (i = prev_index = 0; prev_index < size && array[prev_index] < value;) {
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
		i = prev_index;
		prev_index += jump_step;
	}

	/* Narrow down search range */
	prev_index = prev_index < size - 1 ? prev_index : size - 1;

	/* Linear search within narrowed range */
	for (; i < prev_index && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}

