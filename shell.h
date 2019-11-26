#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

char *read_line(void);
char **strtoken(char *string);
char **executer(char **array, char **env, char *av);
void free_grid(char **string);

void end_of_file(char *buffer);

unsigned int _strlen(char *str);

void free_all(char **ptr);
void null_array(char **buffer);

int _strcmp(char *s1, char *s2);

#endif
