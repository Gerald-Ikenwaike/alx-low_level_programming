#include <stdio.h>
/**
 * main - to print a string of characters using putchar
 * Return: 0
 */

int main(void)
{
	int sam [] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int k = 0;

	while (k < 9)
	{
		putchar(sam[k]);
		k++;
	}
	return (0);
}
