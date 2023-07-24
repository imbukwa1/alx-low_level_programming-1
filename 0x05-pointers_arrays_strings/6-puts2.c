#include "main.h"
#include <stdio.h>

/**
 * puts2 - fuction should print only one character out
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int u = 0;
	char *z = str;
	int o;

	while (z = '\0')
	{
		z++;
		longi++;
	}
	u = longi -1;
	for (o = 0 ; o <= u ; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
