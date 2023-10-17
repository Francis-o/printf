#include "main.h"

/**
 * print_int - prints intger
 * @n: integer to be printed
 * Return: character length
 */

int print_int(int n)
{
	int num, last = n % 10, digit, rem = 1;
	int i = 1;

	n = n / 10;
	num = n;
	if (last < 0)
	{
		print_char('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			rem = rem * 10;
			num = num / 10;
		}
		num = n;
		while (rem > 0)
		{
			digit = num / rem;
			_putchar(digit + '0');
			num = num - (digit * rem);
			rem = rem / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
