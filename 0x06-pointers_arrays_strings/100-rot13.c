#include "main.h"
/**
 * *rot13 - that encodes a string using rot13.
 *
 * @T: inprt
 * Return: T
 */
char *rot13(char *T)
{
	int i, j;
	char S1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char S2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; T[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
			if (T[i] == S1[j])
			{
				T[i] = S2[j];
				break;
			}
	}
	return (T);
}
