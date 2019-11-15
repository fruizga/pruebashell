#include <stdio.h>

char *shell_read_line(void)
{
	int size = 1024;
	int pos = 0;
	char *buff= malloc(sizeof(char) * size);

	if (buff == NULL)
	{
		dprintf(stderr, "Imposible allocate memory\n");
		exit(100);
	}

	while (1)
	{
		// ya casi
	}
}
