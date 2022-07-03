/**
  * File: 2-print_alphabet.c
  * Auth: Mhiret G
  */
#include <stdio.h>
/**
 * main - alphabet print
 * Return: 0
 *
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
}
