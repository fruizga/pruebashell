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
	char *cero = strcat("/bin/", array[0]);
    //char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

    printf("Before execve\n");
    if (execve(cero, array, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}