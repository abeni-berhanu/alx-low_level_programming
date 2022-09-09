#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int number;

for (number = 0; number <= 9; number++)
{
putchar(number);

if (number == 57)
{
break;
}

putchar(',');
putchar(' ');
}

putchar('\n');

return (0);

}
