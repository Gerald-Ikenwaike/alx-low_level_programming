#include <stdio.h>

/**
 * main - program to print alphabets in lowercase using putchar
 * Return: 0
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar('\n');
	return (0);
}
