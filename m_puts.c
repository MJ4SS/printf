#include "main.h"

/**
* m_puts - Function to print a string
* @s: string to be printed
* Return: return the numbers of bytes
*/
int m_puts(char *s)
{
	int i = 0;

	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			m_putchar(s[i]);
		}
	}
	return (i);
}

