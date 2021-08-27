#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * the simplest of shells 
 */

int main(int ac __attribute__((unused)), char **av)
{
    char *input;
    size_t size;
    ssize_t stat;

    (void) av;
    while (1)
    {
        new_prompt();
        stat = getline(&input, &size, stdin);
         
        if(_strcmp(input,"exit\n")==0)
        {
            exit(1);
        }
    }
}