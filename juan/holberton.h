#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


//funciones obligatorias
int _printf(const char *format, ...);
int op_ch(va_list arg);
int op_pr(va_list arg);
int op_st(va_list arg);
int op_nu(va_list arg);
int op_in(va_list arg);
int op_fl(va_list arg);

//funciones utiles
int count(const char *str);
int _putchar(char c);
void print_number(int n);


//Estruct
typedef struct specifier
{
	char *ch;
	int (*f)(va_list str);
} specifier;


#endif
