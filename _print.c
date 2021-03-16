#include "holberton.h"
/**
* _printf - C - function that give number of chars
* @format: Input string with specifiers
*
* Description: A function that produces output
* according to a given format.
* Return: Number of characters printed (excluding
* the null byte used to end output to strings).
*/
int _printf(const char *format, ...)
{
	int i, j;
	int n_words = 0, n_func = 7;
	va_list arg;
	specifier select_spec[] = {
		{"c", op_ch}, {"s", op_st}, {"d", op_nu}, {"i", op_nu},
		{"f", op_fl}, {"b", op_bi}, {"R", _rot13}, {NULL, NULL}};
	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0; format[i] != '\0' && format != NULL; i++)
	{
		if (format[i] != '%')
			n_words = n_words + _putchar(format[i]);
		else
		{
			for (j = 0; j < n_func; j++)
			{
				if (format[i + 1] == select_spec[j].ch[0])
				{
					n_words += select_spec[j].f(arg);
					break;
				}
				else if (format[i + 1] != select_spec[j].ch[0] && format[i + 1] != '\0')
				{
					n_words = n_words + _putchar(format[i]);
					_putchar(format[i + 1]);
					n_words++;
					break;
				}
			}
			if (format[i + 1] == '%')
				_putchar('%');
			else if (i == 0 && format[i + 1] == '\0')
				return (-1);
			i++;
		}
	}
	va_end(arg);
	return (n_words);
}
