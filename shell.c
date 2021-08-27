#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * the simplest of shells 
 */
int main(int ac __attribute__((unused)), char **av, char **env)
{
    
    char *input = NULL;
    size_t size;
    ssize_t stat;
    

    (void) av;

    if (isatty(STDIN_FILENO)== 1)
            
    
    while (1)
    {
        new_prompt();
        stat = getline(&input, &size, stdin);
         if (stat == -1)
                exit(1);

        if(_strcmp(input,"exit\n")==0)
        {
            exit(0);
        }
        else if(_strcmp(input,"env\n")==0)
            print_env(env);
    }
}
  
