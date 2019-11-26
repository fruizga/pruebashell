#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

char *read_line()
{
	signed int bytes_read = 0;
size_t size = 0;
char *string = NULL;
string = (char *) malloc (size);
	if (string == NULL)
	{
		return (NULL);
	}
bytes_read = getline (&string, &size, stdin);
	if (bytes_read == -1)
	{
		end_of_file(string);
		perror("Error");
		exit(0);
	}

	
return (string);
}