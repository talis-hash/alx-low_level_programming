#include <stdio.h>
#include "main.h"

/**
 * Print_number - prints an integer
 * @n: The number to print
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = n;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	putchr(num % 10 + '0');
}
