#include <stdio.h>
#include <unistd.h>
#include "shell.h"

int main(int ac, char **av)
{
	char *item, **arguments, **item2, **correr;
	if (av == NULL)
	{
		return('\0');
	}
item = read_line();
arguments = strtoken(item);
item2 = executer(arguments);

return (ac);
}
