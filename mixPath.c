#include "shell.h"
/**
*mixPath - merge every token with the delimiter
*@patharray: array of tokens
*@cmd: the command
*Return: pointer to char
*/
char *mixPath(char **path, char *cmd)
{
	char *buffer;
	int x = 0;
	size_t auxToken = 0, auxCommand = 0;
	char concat[] = {"/"};
	
    while (path[auxToken])
    {
        if (path[auxToken] == 0)
	    {
		path[auxToken] = "";
	    }
	    if (cmd == 0)
	    {
		cmd = "";
    	}
    	auxToken++;
    }
    auxToken = 0;
	buffer = malloc(sizeof(char) * strlen(*path) + strlen(cmd) + 2);
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (path[auxToken])
	{
	    x = strlen(path[auxToken]);
	    if( path[auxToken][x -1] != '/')
	    {
	        buffer = strcat(path[auxToken], concat);
	    }
	    buffer = strcat(path[auxToken], cmd);
	    //printf("path:%s\n", buffer);
		if (access(buffer, F_OK | X_OK) == 0)
		{
		    printf("accedi");
			return (buffer);
		}
		else
		    free(buffer);
	auxToken++;
	}
}
