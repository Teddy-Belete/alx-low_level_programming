#include <stdio.h>
#include <unistd.h>

/**
 * main - prints "and that piece of arts is useful" - Dora Korpar, 2015-10-19",
 * follwed by a newline, to standard error.
 * Return: Always 1.
 */

int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpa, 2015-10-19\n", stdout);
	return (1);
}
