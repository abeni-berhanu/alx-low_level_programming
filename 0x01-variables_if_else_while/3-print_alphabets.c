#include <stdio.h>
/**
 * main-fun
 * uppuer case and lower case
 *return
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}

for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

return (0);

}
