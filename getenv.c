#include "holberton.h"
/**
 * print_env - prints all environment variables
 * @env: enviroment variables
 */
void print_env(char **env)
{
size_t count = 0;

	while (env[count])
	{
		write(STDOUT_FILENO, env[count], _strlen(env[count]));
		write(STDOUT_FILENO, "\n", 1);
		count++;
	}
}