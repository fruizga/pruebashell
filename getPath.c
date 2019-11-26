#include "shell.h"
/**
*getPath - find the env variable "PATH"
*Return: NULL
*/
char *getPath()
{
char *thePath = NULL;
char **envp = environ;
int pathLen = 0;

while (*envp)
{
	if (strncmp(*envp, "PATH=", 5) == 0)
	{
		thePath = *envp;
		while (*thePath && pathLen < 5)
		{
			thePath++;
			pathLen++;
		}
		return (thePath);
	}
envp++;
}
return (NULL);
}
