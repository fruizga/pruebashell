#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

char *read_line()
{
int bytes_read;
size_t size = 1024;
char *string;

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
return (*strtoken(string));
}

/* while(1)
	{
		string[counter];
		if (string == EOF || string == '\n')
		{
			string[counter] == '\0';
			return (string);


		}


	}



 else
{
puts ("You entered the following string: ");

printf ("\nCurrent size for string block: %d", bytes_read);
} */
