#include "main.h"

/**
* print_alphabet - prints the alphabets in lowercase followed by a new line
*
* Return: Nothing.
*/

void print_alphabet_x10(void)
{
char i;
char alphabet = 'a';

i = 0;
while (i < 10)

{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);

}
_putchar('\n');
i += 1;
}

}
