#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char **main(int argc, char **argv, char *env)
{
    char *envir ;
int buffer = 64, i = 0;
char **virom = malloc((buffer) * sizeof(char*));;

envir = strtok(env, "=");
//token = strtok(e, "=");
while (envir)
{
	virom[i] = envir;
	printf("%s\n", envir);
	envir = strtok(NULL, "=");
	i++;
}
return (virom);
}
