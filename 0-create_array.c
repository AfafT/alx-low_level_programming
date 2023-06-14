#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @ch: character to assign
 * Description: create array of  size and assign character ch
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char ch)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = ch;
	return (str);
}

