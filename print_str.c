#include "main.h"

/**
 * print_str - prints string
 * @str: arguement
 * Return: string character length
 */

int print_str(char *str)
{
	int i = 0;

	if (str = NULL)
	{
		str = "(null)";
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		return (i);
	}
	else 
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		return (i);
	}
