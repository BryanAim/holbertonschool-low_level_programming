#include "sort.h"
/**
 * getmax - get max value (Less significant digit)
 * @array: pointer to array
 * @size: size of the array
 * Return: max value
 **/
int getmax(int *array, size_t size)
{
	size_t max, i;

	max = array[0];
	for (i = 0; i < size; i++)
	{
		if ((unsigned int)array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
 * countsort - counting sort
 * @array: pointer to array
 * @size: size of the array
 * @exp: exponential
 **/
void countsort(int *array, size_t size, int exp)
{
	unsigned int *count, *output;
	size_t i, max;

	max = getmax(array, size);
	count = malloc((max + 1) * sizeof(size_t));
	output = malloc(size * sizeof(size_t));
	if (count == NULL)
	{
		free(count);
		return;
	}
	if (output == NULL)
	{
		free(output);
		return;
	}
	for (i = 0; i <= max; ++i)
		count[i] = 0;
	for (i = 0; i < size; i++)
		count[(array[i] / exp) % 10] += 1;
	for (i = 1; i <= 10; i++)
		count[i] += count[i - 1];
	for (i = 0; i < size; i++)
	{
		output[count[(array[i] / exp) % 10] - 1] = array[i];
		--count[(array[i] / exp) % 10];
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(count);
	free(output);
}
/**
 * radix_sort - radix sort (radix = 10)
 * @array: pointer to array
 * @size: size of the array
 **/
void radix_sort(int *array, size_t size)
{
	int max = getmax(array, size);
	int exp;

	if (!array || size < 2)
		return;
	for (exp = 1; max / exp > 0; exp *= 10)
	{
		countsort(array, size, exp);
		print_array(array, size);
	}
}
