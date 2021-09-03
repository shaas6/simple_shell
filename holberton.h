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

void _exitshell(char **what, char *ptr, int end);

int _putchar(char c);
void _puts(char *str);
void new_prompt(void);
void print_env(char **env);

/* string function */
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);

#endif
