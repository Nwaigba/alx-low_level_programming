#include "main.h"

/**
 * print_alphabet - Entry point
 * Description -  I sometimes suffer from insomnia
 * And when I can't fall asleep
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char atoz = 'a';

	while (atoz <= 'z')
	{
		_putchar(atoz);
		atoz++;
	}
	_putchar('\n');
}
