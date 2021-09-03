#include "holberton.h"
/**
 * getpath - get variable for PATH
 * @env: environment
 * Return: value of PATH
 */

char *getpath(char **env)
{
    size_t index = 0, variable = 0, count = 5;
    char *path = NULL;

    for (index = 0; _strncmp(env[index], "PATH=", 5); index++)
        ;
    if (env[index] == NULL)
                return (NULL);
      
    for (count = 5; env[index][variable]; variable++, count++)
        ;
    path = malloc(sizeof(char) * (count + 1));

    if (path == NULL)
            return (NULL);

    for (variable = 5, count = 0; env[index][variable]; variable++, count++)
                path[count] = env[index][variable];

    path[count] = '\0';
    return (path);
}
