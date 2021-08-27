#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * the simplest of shells 
 */

int main(int ac __attribute__((unused)), char **av)
{
    char buf[900];
    char *input;
    size_t size;
    ssize_t stat;

    while (1)
    {
        stat = getline(&input, &size, stdin);
        if (_strlen(input==0))
        {
                    _strcpy(buf,"\n");
        }
        else     
        {
            _strcpy(buf, input);
        }   
        if(_strcmp(input,"exit")==0)
        {
            exit(0);
        }
    }
}
