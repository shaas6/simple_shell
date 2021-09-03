#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: destination string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (s1[i]);
		if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (s2[i] < s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != '\0')
		return (0);
	return (0);
}

/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int sizes1 = 0;
	int sizes2 = 0;
	int z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[sizes1] != '\0')
		sizes1++;
	while (s2[sizes2] != '\0')
		sizes2++;

	result = malloc((sizes1 + sizes2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (z = 0; z < sizes1; z++)
		result[z] = s1[z];
	for (; z < (sizes1 + sizes2); z++)
		result[z] = s2[z - sizes1];
	result[z] = '\0';
	return (result);
}

/**
 * *_strcpy - copies the string from src to dest buffer
 * @src: source variable
 * @dest: destination
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

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

/**
 *_strncmp -  function that compares two strings.
 *@s1: string one
 *@s2: string two
 *@n: number of characters
 * Return: diference
 */
size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t i, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		i = s1[j] - s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}
