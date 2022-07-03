/*
 * File: 9-print_comb.c
 * Auth: Mhiret B
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 8; ++num)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(9 + '0');

	return (0);
}


