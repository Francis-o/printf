#include "main.h"

/**
 *_putchar - prints single character
 *c: character to print
 *Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
