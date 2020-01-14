#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array
 * @size: is the number of elements in array
 * @value: the value to be searched for
 * @array: is a pointer to the first element of the array to search in
 *
 * Return: Index where found; -1 if not found or array is null.
 */

int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1);
	while (index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
