#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 1 Success
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, s , sizeof(s) - 1);
	return (1);
}
