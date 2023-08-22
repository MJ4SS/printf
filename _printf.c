#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _printf - My printf function
* @format: Characters to be printed
* Return: the numbers of bytes
*/

int _printf(const char *format, ...)
{
	unsigned int i, count = 0, str_count = 0;
	va_list argms;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(argms, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			m_putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			m_putchar(va_arg(argms, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			str_count = m_puts(va_arg(argms, char *));
			i++;
			count = (str_count - 1);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			m_putchar('%');
			i++;
		}
		count++;
	}

	va_end(argms);
	return (count);
}
