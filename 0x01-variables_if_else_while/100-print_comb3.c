#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/completed)
 */
int main(void)

{
int number_left;
int number_right;


for (number_left = 0; number_left <= 9; number_left++)
{
for (number_right = 0; number_right <= 9; number_right++)
{
if ((number_left == number_right)
putchar(number_left);
putchar (number_right);

{
continue;
}

putchar(',');
putchar (' ');

}

}

putchar('\n');

return (0);

}
