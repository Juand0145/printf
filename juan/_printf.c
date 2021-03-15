#include "holberton.h"

int _printf(const char *format, ...)
{
	int i, j;
	int n_words, n_func;
	va_list arg;

	specifier select_spec[] = {
		{"c", op_ch},
		{"%", op_pr},
		{"s", op_st},
		{"d", op_nu},
		{"i", op_in},
		{"f", op_fl},
		{NULL, NULL}
	};

	if (format == NULL)
		return (0);

	va_start(arg, format);

	n_func = 6;
	n_words = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
			n_words = n_words + _putchar(format[i]);

		else
		{
			for (j = 0; j < n_func; j++)
			{
				if (format[i + 1] == select_spec[j].ch[0])
				{
					n_words = select_spec[j].f(arg) + n_words;
					break;
				}
			}
			i++;
		}
	}

	va_end(arg);

	return (n_words);
}
