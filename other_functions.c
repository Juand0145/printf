#include "holberton.h"
/**
 * _rot13 - Encodes a string using rot13.
 * @agr: characther.
 *
 * Return: Size to string.
 */
int _rot13(va_list agr)
{
int i, j, count, h;
char letter[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
char rotcode[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
char *str = va_arg(agr, char*);
i = j = count = 0;

if (str == NULL)
{
	_printf("(null)");
	return (6);
}
for (; str[i]; i++)
{
	h = 0;
	for (j = 0; letter[j]; j++)
	{
		if (str[i] == letter[j])
		{
			_putchar(rotcode[j]);
			h = 1;
			count++;
		}
	}
	if (!h)
	{
		_putchar(str[i]);
		count++;
	}
}

return (count);
}
