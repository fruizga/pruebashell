#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "shell.h"

int starter(char **args)
{
pid_t pid, wpid;
int status;

pid = fork();
if (pid == 0) 
{
	if (execve(args[0], args, NULL) == -1)
	{
		perror("lsh");
	}
	exit(EXIT_FAILURE);
} 
else if (pid < 0) 
{
	perror("lsh");
} 
else
{
	do {
		wpid = waitpid(pid, &status, WUNTRACED);
	} while (!WIFEXITED(status) && !WIFSIGNALED(status));
}
return (1);
}
