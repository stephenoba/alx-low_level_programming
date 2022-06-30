#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: previously allocated memory
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_sive: the new size in bytes of the new memory block
 * Returns: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	free(ptr);
	return (ptr);
}
