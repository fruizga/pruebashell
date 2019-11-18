#include <stdio.h>
#include <unistd.h>
#include "shell.h"

int main(int ac, char **av)
{
	if (av == NULL)
	{
		return('\0');
	}
read_line();
}
