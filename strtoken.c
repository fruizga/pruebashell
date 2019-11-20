#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

char **strtoken(char *string)
{
char *token;
int buffer = 64, i = 0;
char **array = malloc((buffer) * sizeof(char*));;

token = strtok(string, " \n");
while (token)
{
	array[i] = token;
	printf("%s\n", token);
	token = strtok(NULL, " \n");
	i++;
}
return (array);
}
