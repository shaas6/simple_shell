#include "holberton.h"
/**
 * print_env - prints all environment variables
 */
void print_env(char **env)
{
	int i;
	for(i = 0; env[i]; i++)
		puts(env[i]);
}
