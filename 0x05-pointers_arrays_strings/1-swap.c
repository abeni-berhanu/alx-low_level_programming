#include "main.h"
/**
 * swap_int - swaps value of two variables
 * @a:  pointer 1
 * @b:  pointer 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int h;

h = *a;
*a = *b;
*b = h;

}
