#include "holberton.h"
/**
 * fork_func - function that creates a fork
 * @arg: command and values path
 * @av: name of program
 * @env: environment
 * @lineptr: command line for the user
 * @id: id of process
 * @c: checker add new test
 * Return: 0 if successful
 */
int fork_func(char **arg, char **av, char **env, char *lineptr, int id, int c)
{
	pid_t childPID;
	int status;
	char *format = "%s: %d: %s: not found\n";

	childPID = fork();

	if (arg == NULL)
		exit(errno);

	if (childPID == 0)
	{
		if (execve(arg[0], arg, env) == -1)
		{
			fprintf(stderr, format, av[0], id, arg[0]);
			if (!c)
				free(arg[0]);
			free(arg);
			free(lineptr);
			exit(errno);
		}
	}
	else
		{
			wait(&status);
			if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
			return (WEXITSTATUS(status));
		}
		return (0);
}
