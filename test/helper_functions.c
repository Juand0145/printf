#include "holberton.h"
/**
* count - Count the number of characters
* @str: Input string
*
* Description: Function to count the number
* of characters in a string
* Return: Number of characters of string
*/
int count(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
* _putchar - Writes the character c to stdout
* @c: The character to print
*
* Description: Function to write a character
* Return: On success 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_number - Print numbers
* @n: Input integer to print
*
* Description: Function to write an integer
*/
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
