#include <stdio.h>
#include <unistd.h>

char *read_line(void);
char **strtoken(char *string);

int main(int ac, char **av)
{
	if (av == NULL)
	{
		return('\0');
	}
read_line();
}
