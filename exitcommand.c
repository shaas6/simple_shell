#include "holberton.h"
/**
 * _exitshell - exits the shell
 * @linepointer: input
 * @arg: argument pointer
 * @end: exit value
 * Return: nothing
 */

void _exitshell(char **arg, char *linepointer, int end)
{
	int status = 0;

	if (!arg[1])
	{
		free(linepointer);
		free(arg);
		exit(end);
	}
	status = atoi(arg[1]);

	free(linepointer);
	free(arg);
	exit(end);
}
