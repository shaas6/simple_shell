#include "holberton.h"

/**
 * the simplest of shells
 * erroneous comment 
 */

int main(int ac, char **av)
{
    char *input;
    size_t size;
    ssize_t status;
    
    while (1)
    {
        status = getline(&input, &size, stdin);
        if (status == -1)
         {  
            perror("Input error");
         }
    }
    return (0);
}
