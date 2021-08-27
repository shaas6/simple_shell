#include "holberton.h"

/**
 * the simplest of shells
 * erroneous comment 
 */

int main(int ac __attribute__((unused)), char **av)
{
    char *input;
    size_t size;
    
    while (1)
    {
        **av = getline(&input, &size, stdin);
        if (**av == -1)
         {  
            perror("Input error");
         }
    }
    return (0);
}
