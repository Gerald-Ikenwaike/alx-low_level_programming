#include <stdio.h>

/**
*main - program to print alphabets in reverse
*Return: 0
*/

int main(void)
{
	int rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
