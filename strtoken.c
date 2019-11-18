#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

char **strtoken(char *string)
{
char *token;
char **array;
int i = 0;

token = strtok(string, " ");
while (token)
{
	array[i] = token;
	printf("%s\n", token);
	token = strtok(NULL, " ");
	i++;
}
return (0);
}
