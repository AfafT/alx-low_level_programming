#include <stdio.h>
#include "main.h"

/**
 * main - print all the arguments it receives
 * @argc: number of arg
 * @argv: array of arg
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}

