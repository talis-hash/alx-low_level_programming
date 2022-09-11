#include <stdio.h>
/**
 * main - prints the alphabet in lowercas, and then in uppercase.
 *
 */
int main(void)

{
	char letter;

	for (letter = 'a'; <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
