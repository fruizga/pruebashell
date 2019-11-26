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
char **executer(char **array);
void free_grid(char **string);

void end_of_file(char *buffer);

unsigned int _strlen(char *str);
void get_out(char **array);

void free_all(char **ptr);
void null_array(char **buffer);

int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);

#endif
