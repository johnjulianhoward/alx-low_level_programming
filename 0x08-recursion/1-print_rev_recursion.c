#include "main.h"
/**
 * _print_rev_recursion - Prints a stringg in reverse.
 * @s: The stringg to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
