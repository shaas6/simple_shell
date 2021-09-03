#include "holberton.h"

/**
 * _exitshell - exits the shell
 * @lineptr: input
 * @what: arguement pointer
 * @end: exit value
 * Return: nothing
 */

void _exitshell(char **arguments, char *linepointer, int end)
{
	int status = 0;

	if (!arguments[1])
	{
		free(linepointer);
		free(arguments);
		exit(end);
	}
	status = atoi(arguments[1]);

	free(linepointer);
	free(arguments);
	exit(end);
}
