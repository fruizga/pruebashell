#include "shell.h"
/**
*mixPath - merge every token with the delimiter
*@patharray: array of tokens
*@cmd: the command
*Return: pointer to char
*/
char *mixPath(char *patharray, char *cmd)
{
	char *buffer;
	size_t auxToken = 0, auxCommand = 0;

	if (patharray == 0)
	{
		patharray = "";
	}
	if (cmd == 0)
	{
		cmd = "";
	}
	buffer = malloc(sizeof(char) * strlen(patharray) + strlen(cmd) + 2);
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (patharray[auxToken])
	{
		buffer[auxToken] = patharray[auxToken];
		auxToken++;
	}
	if (patharray[auxToken - 1] != '/')
	{
		buffer[auxToken] = '/';
		auxToken++;
	}
	while (cmd[auxCommand])
	{
		buffer[auxToken + auxCommand] = cmd[auxCommand];
		auxCommand++;
	}
	buffer[auxToken + auxCommand] = '\0';
	return (buffer);
	}
