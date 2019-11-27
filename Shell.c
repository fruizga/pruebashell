#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

int main(int ac, char **av)
{
    char *readGet, *path, *tokenReadLine, **tokeniz, **executeShell, **patcmmd;
    char **cmd = NULL;
    
	if (av == NULL)
	{
		return('\0');
	}
	while (1)
	{
		printf("$ ");
		readGet = read_line();
		//readGet[strlen - 1] = '\0';
		cmd = tokenizer(readGet);
		path = getPath();
		tokeniz = tokenizer(path);
	    //printf("%s", tokeniz);
		patcmmd = mixPath(tokeniz, cmd[0]);
	//	printf("%s", patcmmd);
		executer(patcmmd);
	}
free(readGet);
free(tokeniz);
free(executeShell);
return (ac);
}
