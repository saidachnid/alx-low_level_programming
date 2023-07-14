#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:Prints all numbers of base16 in lowercase,followed by a newline,
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}
