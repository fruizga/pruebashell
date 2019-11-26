#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

char **strtoken(char *string)
{
char *token;
int buffer = 64, i = 0;
char **array = malloc((buffer) * sizeof(char*));

if (array == NULL)
		return (NULL);

token = strtok(string, " \n");
/*token = strtok(e, "=");*/
while (token)
{
	array[i] = malloc(_strlen(token) + 1);
	if (array[i] == NULL)
		{
			free_all(array);
			return (NULL);
		}

	/*array[i] = token;*/
	_strncpy(array[i], token, _strlen(token) + 1);
	/*printf("%s\n", token);*/
	token = strtok(NULL, " \n");
	i++;
}
array[i] = NULL;
return (array);
}
