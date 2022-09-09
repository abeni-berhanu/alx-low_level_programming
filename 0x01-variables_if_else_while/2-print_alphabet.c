#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
char small_letters;

for (small_letters = 'a'; small_letters <= 'z'; small_letters++)

{
putchar(small_letters);
}

putchar('\n');

return (0);

}
