#include "main.h"
/**
  * _strlen_recursion - A function that returns the length of a string
  * @s: A pointer that points to a string
  * Return: The length of the string
  */
int _strlen_recursion(char *s)
{
	short L = 0;
	if (*s != '\0')
	{
		L++;
		L=L + _strlen_recursion(s +1);
	}
	return (L);
}
