#include "main.h"
/**
 * _strlen_recursion-return the length of a string
 * @s: the string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}
	return (strlen);
}
