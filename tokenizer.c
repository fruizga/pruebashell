#include "shell.h"
/**
*tokenizer - token every object from a string
*@string: the string
*Return: pointer to char
*/
char **tokenizer(char *string)
{
int auxTkn = 1;
size_t counter = 0, i = 0;
char **tokenHolder = NULL;
char *buf = NULL, *token = NULL, *bufptr = NULL;
buf = strdup(string);

	if (buf == NULL)
	{
		return (NULL);
	}
	bufptr = buf;

	while (*bufptr)
	{
		if (strchr(":", *bufptr) != NULL && i == 0)
		{
			auxTkn++;
			i = 1;
		}
		else if (strchr(":", *bufptr) == NULL && i == 1)
		{
			i = 0;
		}
		bufptr++;
	}
	tokenHolder = malloc(sizeof(char *) * (auxTkn + 1));
	token = strtok(buf, ":");
	while (token)
	{
		tokenHolder[counter] = strdup(token);
		if (tokenHolder[counter] == NULL)
		{
			free(tokenHolder);
			return (0);
		}
		token = strtok(NULL, ":");
		counter++;
	}
	free(buf);
	return (tokenHolder);
}
