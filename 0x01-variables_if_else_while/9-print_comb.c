#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 * separated by commas and spaces, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
