#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot 13
 * @s: pointer to string params
 * return: *s
 */
char *rot13(char *s)
{
	int k;
	int l;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; l < 52; l++)
		{
			if (s[k] == data[l])
			{
				s[k] = datarot[l];
				break;
			}
		}
	}
	return (s);
}
