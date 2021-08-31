#include "holberton.h"
/**
 * _strlen - calculate length of string
 * @s: pointer to string
 *
 * Return: length of string
*/
int _strlen(char *s)
{
int length = 0;

while (*s != 0)
{
s++;
length++;
}
return (length);
}
