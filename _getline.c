#include "holberton.h"
/**
 * _getline - prints "shell$" and waits for input
 * Return: line of string input for user
 */

char *_getline(void)
{
    char *linepointer = NULL;
    size_t user = 0;

    if (isatty(STDIN_FILENO))
        write(STDOUT_FILENO, "shell$ ", 7);

    if (getline(&linepointer, &user, stdin) == -1)
    {
        free(linepointer);
        return (NULL);
    }
    return (linepointer);
}
