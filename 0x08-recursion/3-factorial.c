#include "main.h"
/**
  *factorial - calculate the fuctorial of an integer
  *@n: the integer
  *Return: factorial of n or -1 if n is negative
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factoriel(n - 1));
}
