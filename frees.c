#include "shell.h"

void free_all(char **ptr)
{
	unsigned int i = 0;

	if (ptr == NULL)
		return;

	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}

	if (ptr[i] == NULL)
		free(ptr[i]);
	free(ptr);
}


/**
 * if array o tokens is null
 * 
 */
void null_array(char **buffer)
{
	free(buffer);
	exit(EXIT_SUCCESS);
}

/**
 * 
 * *
 */

void get_out(char **array)
{
	free(array);
	free_all(array);
	exit(EXIT_SUCCESS);
}