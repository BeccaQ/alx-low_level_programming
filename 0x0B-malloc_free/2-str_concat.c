#include "main.h"
/**
 * str_concat - Write a function that concatenates
 * two strings
 * @s1: a string to copy
 * @s2: a second string to copy
 * Return: pointer to a new allocated space memory
 * and NULL if code fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, len;
	char *s;

	if (!s1)
		i = 0;
	else
		for (i = 0; s1[i];)
			i++;
	if (!s2)
		j = 0;
	else
		for (j = 0; s2[j];)
			j++;
	len = i + j + 1;

	s = malloc(len * sizeof(char));

	if (!s)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
