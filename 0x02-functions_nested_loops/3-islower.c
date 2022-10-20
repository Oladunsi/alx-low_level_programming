#include <stdio.h>

/**
* _islower - checks if argument is lowercase character or not
* @letter: An input character
*
* Return: 0 if True and 1 if not
*/

int _islower(int letter)
{

char alpha;
int lower = 0;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == letter)
{
lower = 1;
}
}

return (lower);
}
