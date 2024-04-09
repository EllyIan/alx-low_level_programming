#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, the index of the first occurrence is
 *         returned. Otherwise, -1 is returned.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)  // Check for NULL pointer
		return (-1);

	left = 0;
	right = size - 1;

	while (right >= left) {
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)  // Original if statement
			right = mid - 1;
		else  // Original if statement
			left = mid + 1;
	}

	return (-1);
}
