#include "holberton.h"

/**
 * _exitshell - exits the shell
 * @lineptr: input
 * @what: arguement pointer
 * @end: exit value
 * Return: nothing
 */

void _exitshell(char **what, char *lineptr, int end)
{
	int status = 0;

	if (!what[1])
	{
		free(lineptr);
		free(what);
		exit(end);
	}
	status = atoi(what[1]);

	free(lineptr);
	free(what);
	exit(end);
}
