#include <stdio.h>
#include <string.h>
#include "shell.h"
int execute(char **args)
{
int i;

if (args[0] == NULL) 
{
	return ('\0');
}
for (i = 0; i < lsh_num_builtins(); i++)
{
	if (strcmp(args[0], builtin_str[i]) == 0) 
	{
		return (*builtin_func[i])(args);
	}
}
return starter(args);
}
