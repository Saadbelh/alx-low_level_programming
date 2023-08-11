#include<stdio.h>
/**
 * main - alphabet print
 *
 * Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwyz";
	int i;

	for (i=0; i<26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
