#include"main.h"
/**
 * *leet - unction that encodes a string into 1337
 * @T: val
 *
 * Return: T
 */
char *leet(char *T)
{
	int i, j;

	char S1[] = "aAeEoOtTlL";
	char S2[] = "4433007711";

	for (i = 0; T[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (T[i] == S1[j])
			{
				T[i] = S2[j];
			}
		}
	}
	return (T);
}
