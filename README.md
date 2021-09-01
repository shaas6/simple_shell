# Simple shell

Our repository contains a basic iteration of a shell for command line interaction.

To use our shell: You'll need a clone of the repository, and must also be able to use the gcc command.
Copy and paste this into your terminal:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c holberton.h -o shell

If compilation is successful, run the program by typing ./shell into your terminal

## Builtins: 
**env**: prints environment variables

**exit**: exits the program

*Example 1*: env(Enter) prints all environment variables, one per line

*Example 2*: exit(Enter) ends the program and returns to location program was run from

## Files:
shell.c

strcmp.c

strcpy.c

strlen.c

puts.c

putchar.c

printenv.c

new_prompt.c

holberton.h

man_1_simple_shell

**This repository was created by and contributed to by Darwin Delgado and Sean Haas.**