#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char read_line(int argc, char *argv[])
{
	size_t size = 1024;
	int pos = 0;
	char *buff = malloc(sizeof(char) * size);
	int len = 0;

	if (buff == NULL)
	{
		printf("Imposible allocate memory\n");
		exit(100);
	}

	while (len = getline(&buff, &size, stdin) >= 0)
	{
		printf("%d", buff[pos]);

		pos++;
	}
	//este si es 

	return (0);
}
