#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of the character \ should be print
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, l;

		for (k = 0; k < n; k++)
		{
			for (l = 0; l < n; l++)
			{
				if (k == l)
					_putchar('\\');
				else if (l < k)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
