#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* holds environment variables */
extern char **environ;

int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
void new_prompt(void);
void print_env(char **env);

#endif
