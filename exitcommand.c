#include "holberton.h"

/**
 * _exitshell - exits the shell
 * @ptr: input
 * @what: arguement pointer
 * @end: exit value
 * Return: nothing
 */

void _exitshell(char **what, char *ptr, int end)
{
	int status = 0;

	if (!what[1])
	{
		free(ptr);
		free(what);
		exit(end);
	}
	status = atoi(what[1]);

	free(ptr);
	free(what);
	exit(end);
}
