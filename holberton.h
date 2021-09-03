#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

/* holds environment variables */
extern char **environ;
int path_value(char **arg, char **env);
void _exitshell(char **arg, char *linepointer, int end);
int fork_func(char **arg, char **av, char **env, char *linepointer, int id, int c);
void new_prompt(void);
void print_env(char **env);
char **get_token(char *linepointer);
char *_getline(void);
char *getpath(char **env);
/* string function */
int _strcmp(char *s1, char *s2);
size_t _strncmp(char *s1, char *s2, size_t n);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);

#endif
