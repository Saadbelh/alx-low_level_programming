#include "main.h"
/**
 * *cap_string - unction that capitalizes all words of a string.
 * @T: stringto
 *
 * Return: char capital
 */
char *cap_string(char *T)
{
	int i = 0;

	while (T[i])
	{
		while (!(T[i] >= 'a' && T[i] <= 'z'))
			i++;

		if (T[i - 1] == ' ' ||
			T[i - 1] == '\t' ||
			T[i - 1] == '\n' ||
			T[i - 1] == ',' ||
			T[i - 1] == ';' ||
			T[i - 1] == '.' ||
			T[i - 1] == '!' ||
			T[i - 1] == '?' ||
			T[i - 1] == '"' ||
			T[i - 1] == '(' ||
			T[i - 1] == ')' ||
			T[i - 1] == '{' ||
			T[i - 1] == '}' ||
			i  == 0)
			T[i] -= 32;

		i++;
	}
	return (T);
}
