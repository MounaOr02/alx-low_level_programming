#include "main.h"
/**
  * print_alphabet -This function will print all alphabets
  * in lowercase, followed by a new line.
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
