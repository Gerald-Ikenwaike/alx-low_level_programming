#include <stdio.h>
/**
 * main - program to print hexadecimal numbers
 * Return: 0
 */

int main(void)
{
	int num;
	int alph;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
