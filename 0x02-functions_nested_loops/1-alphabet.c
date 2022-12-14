#include "main.h"

/**
  * main -  I sometimes suffer from insomnia. 
  * And when I can't fall asleep, I play what I call the alphabet game
  *
  * Return: Always 0
  */

void print_alphabet(void)
{
	char atoz = 'a';
	while (atoz <='z')
	{
		_putchar(atoz);
		atoz++;
	}
	_putchar('\n');
}
