#include <stdio.h>
#include <unistd.h>
#include "shell.h"

int main(int ac, char **av)
{
char *item;
char **arguments;
int status;
	if (av == NULL)
	{
		return('\0');
	}
item = read_line();
arguments = strtoken(item);
status = execute(arguments);
return (0);
}