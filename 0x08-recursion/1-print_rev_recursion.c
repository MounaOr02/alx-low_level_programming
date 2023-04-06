#include "main.h"
/**
  * _print_rev_recursion - A function that prints a string in reverse
  * @s: A pointer that points to a string that it's printing in reverse
  * Return: (void)
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
