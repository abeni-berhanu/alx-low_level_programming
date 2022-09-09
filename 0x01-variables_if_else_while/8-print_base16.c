#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0 (success)
 */
int main(void)
{
char num;
char hexa;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}

for (hexa = 'a'; hexa <= 'f'; hexa++)
{
putchar(hexa);
}

putchar('\n');

return (0);

}
