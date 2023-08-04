#include <stdio.h>
#include "main.h"

/**
 * @argc: number of arguments
 * main - prints the name of the program
 *  Return: Always 0 (Success)
 * @argv: array of arguments
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
