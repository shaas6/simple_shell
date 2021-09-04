#include "holberton.h"
/**
 * _exitshell - exits the shell
 * @lineptr: input
 * @arg: argument pointer
 * @end: exit value
 * Return: nothing
 */

void _exitshell(char **arg, char *lineptr, int end)
{
	int status = 0;

	if (!arg[1])
	{
		free(lineptr);
		free(arg);
		exit(end);
	}
	status = atoi(arg[1]);

	free(lineptr);
	free(arg);
	exit(status);
}
