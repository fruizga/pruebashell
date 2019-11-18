#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

char **strtoken(char *string)
{
char *token;
int bofe = 64, i = 0;
char **array = malloc(bofe * sizeof(char*));;



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
