#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
