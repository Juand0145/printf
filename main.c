#include "holberton.h"

int main(void)
{
	/*unsigned int ui;*/
	_printf("Hello World\n");
	_printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Percent:[%%]\n");
	/*_printf("Unsigned octal:[%o]\n", ui);*/
	_printf("Percent:[%%]\n");
	_printf("Percent:[%%]\n");
	_printf("%R\n", "Hello 98World");
	_printf("%R\n", NULL);
	_printf("%R\n", '\0');
	/*_printf("Unsigned:[%u]\n", ui);*/
	/*_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
	return 0;
}
