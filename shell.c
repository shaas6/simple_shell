#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * the simplest of shells
 * erroneous comment 
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
        if (strlen(input==0))
        {
                    strcpy(buf,"\n");
        }
        else     
        {
            strcpy(buf, input);
        }   
        if(strcomp(input,"exit")==0)
        {
            exit(0);
        }
    }
}
