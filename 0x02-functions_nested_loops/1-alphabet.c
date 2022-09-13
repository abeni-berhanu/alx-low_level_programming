#include "main.h"
/**
 * main - Entry point
 *print_alphabet: print alphabet 
 *Return: nothing, return void
 */
void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

}
