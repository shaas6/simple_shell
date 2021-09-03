#include "holberton.h"

/**
 * get_token - get token of string
 * @linepointer: command user
 * Return: to a pointer
 */

char **get_token(char *linepointer)
{
    char **command = NULL;
    char *token = NULL; 
    size_t i = 0;
    int size = 0;

    if (linepointer == NULL)
            return (NULL);
    for (i = 0; linepointer[i]; i++)
    {
    if (linepointer[i] == ' ')
            size++;
    }
    if ((size + 1) == _strlen(linepointer))
                return(NULL);
    command = malloc(sizeof(char *) * (size + 2));
    if (command == NULL)
        return (NULL);      
token = strtok(linepointer, " \n\t\r");
for (i = 0; token != NULL; i++)
{
    command[i] = token;
    token = strtok(NULL, " \n\t\r");
}
command[i] = NULL;
                return (command);
}