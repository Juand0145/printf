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
