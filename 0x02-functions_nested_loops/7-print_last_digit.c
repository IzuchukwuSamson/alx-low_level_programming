#include "main.c"

/**
 * print_last_digit - prints the last digit of a number
 *@n: number being tested
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int lastDig;
	if (n >= 0) {
		lastDig = n % 10;
	}
	else {
		lastDig = (n % 10) * -1;
	}
	_putchar('0' + lastDig);
	return(lastDig)
}
