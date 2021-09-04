#include i"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - the simplest of shells
* @ac: argument counter
* @av: argument variable
* @env: environment variable
* Return: end = 0.
*/
int main(int ac, char **av, char **env)
{
	char *getinput = NULL, **userinput = NULL;
	int pathvalue = 0, end = 0, n = 0;
	(void) ac;

	while (1)
	{
		getinput = _getline();
		if (getinput)
		{
			pathvalue++;
			userinput = get_token(getinput);
			if (!userinput)
			{
				free(getinput);
				continue;
			}
			if (!_strcmp(userinput[0], "exit") && userinput[1] == NULL)
				_exitshell(userinput, getinput, end);
			if (!_strcmp(userinput[0], "env"))
				print_env(env);
		else
			{
				n = path_value(&userinput[0], env);
				end = fork_func(userinput, av, env, getinput, pathvalue, n);
				if (n == 0)
				free(userinput[0]);
			}
			free(userinput);
		}
		else
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			exit(end);
		}
		free(getinput);
	}
}
