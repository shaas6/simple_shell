#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - the simplest of shells
* @ac: argument counter
* @av: argument variable
* @env: environment variable
* Return: Nothing
*/
int main(int ac __attribute__((unused)), char **av, char **env)
{
char *getinput = NULL, **userinput = NULL;
int pathvalue = 0, _exit = 0;

(void) av;

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
            _exitshell(userinput, getinput, _exit);
        if (!_strcmp(userinput[0], "env"))
            print_env(env);

        free(userinput);
    }
    else
    {
        if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			exit(_exit);
    }
    free(getinput);
    }
}
