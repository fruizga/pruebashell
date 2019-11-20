#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

char *read_line()
{
int bytes_read;
char *string;
size_t size = 1024;

string = (char *) malloc (size);
	if (string == NULL)
	{
		return (NULL);
	}
bytes_read = getline (&string, &size, stdin);
	if (bytes_read == -1)
	{
		perror("Error");
	}
return (string);
}
