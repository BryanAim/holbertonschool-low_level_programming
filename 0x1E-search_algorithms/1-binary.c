#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in an array
 * @size: is the number of elements in array
 * @value: the value to be searched for
 * @array: is a pointer to the first element of the array to search in
 *
 * Return: Index where found; -1 if not found or array is null.
 */

int binary_search(int *array, size_t size, int value)
{
	int index = 0;
	int start = 0, end = size - 1;
	int m = (start + end) / 2;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		index = start;
		printf("Searching in array: ");
		while (index < (end + 1))
		{
			if (index < end)
				printf("%d, ", array[index]);
			else
				printf("%d\n", array[index]);
			index++;
		}
		m = (start + end) / 2;
		if (array[m] == value)
			return (array[m]);
		else if (array[m] < value)
			start = m + 1;
		else
			end = m - 1;
	}
	return (-1);
}
