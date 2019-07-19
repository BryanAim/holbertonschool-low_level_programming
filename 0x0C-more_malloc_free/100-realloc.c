#include "holberton.h"
#include <stdlib.h>

/**
  * *_realloc - reallocates a memory block
  * @ptr: pointer
  * @old_size: previous size
  * @new_size: new size
  * Return: new value
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return (0);
	}

	ptr = malloc(new_size);

	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}
	return (ptr);
}
