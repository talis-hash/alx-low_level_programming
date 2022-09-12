#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints exactly "and that piece of art is useful "
 *  - Dora Korpar, 2015-10-19, followed by a new line,
 *  to the standard error.
 *
 * Return: Always 1 (Success)
 */

int main(void)

{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);

			return (1);
}
