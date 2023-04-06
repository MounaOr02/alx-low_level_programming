#include "main.h"
/**
  *puts_recursion - A function that printsa string,followed by new line
  *@s: A pointer that points to a string
  *Return: Nothing
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
