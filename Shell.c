#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

int main(int ac, char **av, char**env)
{
	char *readGet, **tokenizer, **executeShell;
	if (av == NULL)
	{
		return('\0');
	}
	while (1)
	{
		printf("$ ");
		readGet = read_line();
		tokenizer = strtoken(readGet);
		//free(readGet);
		executeShell = executer(tokenizer, env, *av);
		//free(tokenizer);
	}
free(readGet);
free(tokenizer);
free(executeShell);
return (ac);
}
