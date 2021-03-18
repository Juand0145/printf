#include <stdio.h>
#include "holberton.h"

int main(void) {

	int count;
	count = _printf("%\n");
	_printf("Hello World\n");
	_printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	_printf("Percent:[%%]\n");
	_printf("Rot13: [%R] \n", "Hello 98World");
	_printf("%R\n", NULL);
	_printf("%R\n", '\0');
	_printf("%!\n");
	_printf("%d\n", count);
	return (0);
}
