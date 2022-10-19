#include <stdio.h>
#include "main.h"

/**
*
* main - Check description
*
* Description: It prints the word _putchar, followed by a new line.
*
* Return: 0.
*
*/

int main(void)
{
char word[8] = "_putchar";
int count;
for (count = 0; count < 8; count++)
{
_putchar(word[count]);

}
_putchar('\n');
return (0);
}
