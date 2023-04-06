#include "main.h"
/**
  * factorial - A funtion that returns the factoriel of a given number @n
  * @n: the number
  * Return: an integer , the result of @n factoriel
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factoriel(n - 1));
}
