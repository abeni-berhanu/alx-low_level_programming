#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);

}
