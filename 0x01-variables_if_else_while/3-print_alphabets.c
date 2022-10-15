#include <stdio.h>

/**
* main - program that prints the alphabet in lowercase, and then in uppercase,
* You can only use the putchar
* prints both lowerscase alphabets and uppercase on a single line
* Return: 0
*/


int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase += 1;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase += 1;
}
putchar('\n');
return (0);
}
