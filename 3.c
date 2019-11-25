#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strcmp.c"


char  *main(int argc, char **argv, char *env)
{

	int i = 0;

	char *token = NULL;
	for (i = 0; env[i]; i++)
	{
		if (_strcmp (env[i], "PATH") == 0)
		{
			token = strtok (env[i], "=");
			token = strtok (NULL, "=");
}
		printf("%s\n", token);
		return (token);
}

}
