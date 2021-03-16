#include "holberton.h"

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


/**
* op_bi - Print a binary number
* @arg: variadic arguments
*
* Description: Function to print a decimal number in binary notation
* Return: Number of digits printed
*/
int op_bi(va_list arg)
{
	int num, i, j, counter, copy_number, digits;
	int *buffer;

	num = va_arg(arg, unsigned int);
	digits = 0;

	if (!num)
		return (0);

	counter = 0;
	copy_number = num;

	for (i = 0; num != 0; i++)
	{
		num = num / 2;
		counter++;
	}

	buffer = malloc(sizeof(int) * (counter));
	if (buffer == NULL)
	{
		return (0);
	}

	for (i = 0; copy_number > 0; i++)
	{
		buffer[i] = copy_number % 2;
		copy_number = copy_number / 2;
	}

	for (j = (counter - 1); j >= 0; j--)
	{
		_putchar(buffer[j] + '0');
	}

	digits = i;
	free(buffer);
	return (digits);
}
