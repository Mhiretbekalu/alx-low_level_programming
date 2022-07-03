/*
 * File: 1-last_digit.c
 * Auth mhiret b
 *
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - prints of the lasts digit
  *Return: 0
  */
int main(void)
{
	int lstd;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lstd > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	else if (lstd == 0)
		printf("Last digit of %d is %d and is 0\n", n, lstd);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstd);
	return (0);
}
