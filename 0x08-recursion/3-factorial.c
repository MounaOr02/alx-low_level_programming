#include "main.h"
/**
  * factorial - A funtio that returns the factoriel of a given number
  * @n: the number of type int
  * Return: The result of @n factoriel 
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factoriel(n - 1));
}
