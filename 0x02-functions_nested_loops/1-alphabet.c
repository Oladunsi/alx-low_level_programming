#include "main.h"


/**
* main - prints the alphabets in lowercase followed by a new line
*
* Return: Nothing.
*/

void print_alphabet(void)
{

char a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
