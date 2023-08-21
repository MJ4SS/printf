#include "main.h"

/**
* m_putchar - Function to print characters
* @c: char to be printed
* Return: return 1
*/
int m_putchar(char c)
{

	return (write(1, &c, 1));
}

