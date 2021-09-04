#include "holberton.h"
/**
 * _getline - prints "shell$" and waits for input
 * Return: line of string input for user
 */
char *_getline(void)
{
	char *lineptr = NULL;
	size_t user = 0;

	if (isatty(STDIN_FILENO))
	write(STDOUT_FILENO, "shell$ ", 7);

	if (getline(&lineptr, &user, stdin) == -1)
	{
		free(lineptr);
		return (NULL);
	}
	return (lineptr);
}
