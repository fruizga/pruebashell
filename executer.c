#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "shell.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
char **executer(char **array)
{
	
    //char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

    printf("Before execve\n");
    printf("El primer arguento es: %s\n", array[0]);

    if (execve(array[0], array, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
