#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

int main(int ac, char **av)
{
	char *readGet, **tokeniz, **executeShell;
	if (av == NULL)
	{
		return('\0');
	}
	while (1)
	{
		printf("$ ");
		readGet = read_line();
		tokeniz = tokenizer(readGet);
		/*free(readGet);*/
		executeShell = executer(tokeniz);
		/*free(tokenizer);*/
	}
free(readGet);
free(tokeniz);
free(executeShell);
return (ac);
}
