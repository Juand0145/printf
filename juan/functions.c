#include "holberton.h"
//funciones obligatorias

/**
 * op_ch - print a character
 */
int op_ch(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	_putchar(i);
	return (1);
}

/**
 * op_pr - print a percentage
 */
int op_pr(va_list arg)
{
	_putchar('%');
	return (1);
}

/**
 * op_st - print a string
 */
int op_st(va_list arg)
{
	int i;
	char *str2;

	str2 = va_arg(arg, char *);

	if (str2 == NULL)
		return (0);

	for (i = 0; str2[i] != '\0'; i++)
		_putchar(str2[i]);

	return (i);
}

/**
 * op_nu - print an integer number
 */
int op_nu(va_list arg)
{
	int num;
	int digits;

	num = va_arg(arg, int);

	if (num < 0)
	{
		num = - num;
		_putchar('-');
		digits = 1;
	}

	print_number(num);

	while (num % 10 != 0)
	{
		digits++;
		num = num / 10;
	}

	return (digits);
}

/**
 *
 */
int op_in(va_list arg)
{
	int num;
	int digits;

	num = va_arg(arg, int);

	if (num < 0)
	{
		num = - num;
		_putchar('-');
		digits = 1;
	}

	print_number(num);

	while (num % 10 != 0)
	{
		digits++;
		num = num / 10;
	}

	return (digits);
}

/**
 *
 */
int op_fl(va_list arg)
{
	float num, num_dec;
	unsigned int num_p;
	int point;

	num = va_arg(arg, double);

	if (num < 0)
	{
		num = - num;
		_putchar('-');
	}

	print_number(num);
	num_p = num;
	num_dec = (num - num_p) * 1000000;
	_putchar('.');

	for (point = 0; num_p % 10 > 0; point++)
		num_p = num_p / 10;

	print_number(num_dec);

	if (num_dec == 0)
		_printf("00000");


	return (point + 1 + 6);
}

// Funciones utiles
int count(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *
 */
void print_number(int n)
{
	unsigned int num;
	num = n;

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
