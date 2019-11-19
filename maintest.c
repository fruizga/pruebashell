#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

int main(int ac, char **av)
{
	char *item, **arguments, **item2;
	if (av == NULL)
	{
		return('\0');
	}
item = read_line();
arguments = strtoken(item);

item2 = executer(arguments);

free(item);
free(item2);
return (ac);
}
