#include <stdio.h>

/**
* main - program that prints the alphabet in lowercase, and then in uppercase,
* You can only use the putchar
* Return: 0
*/

int main(void)
{
char lowercase = 'a';

while (lowercase <= 'z')
{
if (lowercase == 'e' || lowercase == 'q')
{
lowercase += 1;
}
else
{
putchar(lowercase);
lowercase += 1;
}
}
putchar('\n');
return (0);
}
