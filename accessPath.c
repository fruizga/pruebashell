#include "shell.h"
/**
*accessPath - check every token and access to it
*@tokenarray: the array that have the tokens
*@cmd: the command
*Return: pointer to char
*/
char *accessPath(char **tokenarray, char *cmd)
{
int i = 0;
char *holderBuffer;

while (tokenarray[i])
{
	holderBuffer = mixPath(tokenarray[i], cmd);
	if (access(holderBuffer, X_OK) == 0)
	{
		printf("%s", holderBuffer);
		return (holderBuffer);
	}
	else
		free(holderBuffer);
	i++;
}
return (NULL);
}
