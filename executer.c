#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include "shell.h"

char **executer(char **array)
{
pid_t child;
int status;



if (array == NULL)
{
	null_array(array);
}

else if (_strcmp("exit", array[0]))
		get_out(array);

child = fork();

if (child == 0)
{
	
	if (execve(array[0], array, NULL) == -1)
	{
		perror("Error: ");
	}
}
else if (child < 0)
{
	perror("Error: ");
	exit(EXIT_FAILURE);
}
else
{
	wait(&status);
}
free(array);
return (0);
}
