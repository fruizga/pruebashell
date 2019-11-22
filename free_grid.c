#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

void free_grid(char **string)
{
    int i, j;

for (i = 0; string[i]; i++)
{    
}

for (j = 0; j < i; j++)
{
	free(string[j]);
}
free(string);

}