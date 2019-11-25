#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **rutas(char *string);

int main(int argc, char *argv[], char * envp[]) 
{ 
    int i, j = 0;
    char *anotherPath = malloc(1024);
    char *finalPath = malloc(1024);
    char *tokenPath = malloc(1024);
    for (i = 0; envp[i] != NULL; i++)
    {
        //printf("\n%s", envp[i]); 
        tokenPath = strtok(envp[i], "=");
        if (strcmp(tokenPath, "PATH") == 0)
        {
        //printf("%s\n", tokenPath); 
        tokenPath = strtok(NULL, "=");
        //printf("%s\n", tokenPath);
        finalPath = strtok(tokenPath, ":");
        while(finalPath != NULL)
        {
        finalPath = strtok(NULL, ":");
        printf("%s\n", finalPath);
        }
        }
    //printf("%s\n", tokenPath);
    }
return (0);
} 