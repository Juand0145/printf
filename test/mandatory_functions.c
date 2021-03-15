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
* op_pr - Print a percentage
* @arg: variadic arguments
*
* Description: Function to print a % as special character
* Return: Number of char printed (1)
*/
int op_pr(va_list arg)
{
	_putchar('%');
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
		return (0);

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
	int digits;

	num = va_arg(arg, int);

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

	return (digits);
}

/**
* op_fl - Print a floating number
* @arg: variadic arguments
*
* Description: Function to print a number with decimal places
* Return: Number of digits printed, include the point (.)
* and decimal places
*/
int op_fl(va_list arg)
{
	float num, num_dec;
	unsigned int num_p;
	int point;

	num = va_arg(arg, double);

	if (num < 0)
	{
		num = -num;
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
