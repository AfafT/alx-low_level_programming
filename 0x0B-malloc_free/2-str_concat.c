#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int a, ca;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = ca = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ca] != '\0')
		ca++;
	conc = malloc(sizeof(char) * (a + ca + 1));

	if (conc == NULL)
		return (NULL);
	a = ca = 0;
	while (s1[a] != '\0')
	{
		conc[a] = s1[a];
		a++;
	}

	while (s2[ca] != '\0')
	{
		conct[a] = s2[ca];
		a++, ca++;
	}
	conc[a] = '\0';
	return (conc);
}

