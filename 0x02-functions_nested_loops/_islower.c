#include <stdio.h>

/**
* _islower - checks if argument is lowercase character or not
*
* Return: 0 if True and 1 if not
*/

int _islower(char letter)
{

char alpha = 'a';
int lower = 0;
for (alpha; alpha < 'z'; alpha++)
{
if (letter == alpha)
{
lower = 1;
return (lower);
}
}

return (lower);
}
