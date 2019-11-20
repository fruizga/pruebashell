#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include "shell.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
char **executer(char **array)
{
	
    pid_t hijo, padre, mypid, papid;
    int status;

    hijo = fork();
    
    printf("Before execve\n");
    printf("El primer arguento es: %s\n", array[0]);

if (hijo == 0) {
    
    if (execve(array[0], array, NULL) == -1)
    {
        perror("Error:");
    }
}
 else if (hijo < 0) {
    // Error forking
    perror("Error:");
  }
  else {
    // Parent process
    /*do {
      padre = waitpid(hijo, &status, WUNTRACED);
    } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    printf("Soy tu papá perro %d , %d\n", papid, mypid);*/
    wait(NULL);
  }
    //printf("After execve\n");
    return (0);
}
