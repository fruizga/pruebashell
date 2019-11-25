#include <stdio.h>
int _strcmp(char *s1, char s2);
/**
 * *_strcmp - Concatenate two strings
 * Array that receive the other array
 *@s2: string 2
 *@s1: string 1
 *Return: Always 0.
 */
int _strcmp(char *s1, char s2)
{
	int i = 0, j = 0, rest = 0;

	while (s1[i]  != '\0')
	{
		i++;
	}

	while (s2[j]  != '\0')
	{
		j++;
	}
	rest = i - j;
	if (rest == 0)
	{
		return (0);
}
	else
	{
		return (rest);
}
}
