/*
 * File: 4-print_alphabt.c
 * Auth: Mhiret B
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++z)
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	putchar('\n');

	return (0);
}