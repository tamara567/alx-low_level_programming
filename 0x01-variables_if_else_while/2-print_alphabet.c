#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstvuwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
