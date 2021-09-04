#include "holberton.h"
/**
 * path_value - seperate the path in new strings
 * @arg: user command input
 * @env: environment
 * Return: a pointer to strings
 */
int path_value(char **arg, char **env)
{
	char *token = NULL, *relapath = NULL, *absolute_path = NULL;
	size_t path_value, command;
	struct stat stat_linepointer;

	if (stat(*arg, &stat_linepointer) == 0)
		return (-1);
	relapath = getpath(env);
	if (!relapath)
		return (-1);
	token = strtok(relapath, ":");
	command = _strlen(*arg);
	while (token)
	{
		path_value = _strlen(token);
		absolute_path = malloc(sizeof(char) * (path_value + command + 2));
		if (!absolute_path)
		{
			free(relapath);
			return (-1);
		}
		absolute_path = _strcpy(absolute_path, token);
		str_concat(absolute_path, "/");
		str_concat(absolute_path, *arg);
		if (stat(absolute_path, &stat_linepointer) == 0)
		{
			*arg = absolute_path;
			free(relapath);
			return (0);
		}
		free(absolute_path);
		token = strtok(NULL, ":");
	}
	free(relapath);
	return (-1);
}
