#include "main.h"

/**
 * _printf - this program emulates the c libary printf function
 * @format: string argument
 * Return: character length
 */

int _printf(const char *format, ...)
{
	int char_num = 0;
	int h = 0;
	va_list args;

	va_start(args, format);
	while (format[h] != '\0')
	{
		if (format[h] != '%')
		{
			char_num += print_char(format[h]);
		}
		else if (format[h] == '%')
		{
			if (format[h + 1] == 'c')
			{
				char_num += print_char(va_arg(args, int));
			}
			else if (format[h + 1] == 's')
			{
				char_num += print_str(va_arg(args, char*));
			}
			else if (format[h + 1] == '%')
			{
				char_num += print_char('%');
			}
			else if ((format[h + 1] == 'd') || (format[h + 1] == 'i'))
			{
				char_num += print_int(va_arg(args, int));
			}
			h++;
		}

		h++;
	}
	return (char_num);
}
