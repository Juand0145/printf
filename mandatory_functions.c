#include "holberton.h"
/**
* op_ch - Print a character
* @arg: variadic arguments
*
* Description: Function to print a single character
* Return: Number of char printed (1)
*/
int op_ch(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	_putchar(i);
	return (1);
}

/**
* op_st - Print a string
* @arg: variadic arguments
*
* Description: Function to print a string (> 1 char)
* Return: Number of characters of string printed
*/
int op_st(va_list arg)
{
	int i;
	char *str2;

	str2 = va_arg(arg, char *);

	if (str2 == NULL)
	{
		_printf("(null)");
		return (6);
	}

	for (i = 0; str2[i] != '\0'; i++)
		_putchar(str2[i]);

	return (i);
}

/**
* op_nu - Print an integer number
* @arg: variadic arguments
*
* Description: A function to print an integer number
* (without decimal places).
* Return: Number of digits printed
*/
int op_nu(va_list arg)
{
	int num;
	int digits = 0;

	num = va_arg(arg, int);
	if (!num)
		return (0);

	if (num == 0)
		digits += 1;

	if (num < 0)
	{
		num = -num;
		_putchar('-');
		digits = 1;
	}

	print_number(num);

	while (num % 10 != 0)
	{
		digits++;
		num = num / 10;
	}

	digits += 1;

	return (digits);
}
