#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: n is an integer
 * Return: integer
 */
int _abs(int n)
{
if (n >= 0)
{
_putchar(n);
}
else
{
n = n / -1;
_putchar(n);
}

return (0);
}
