#include <stdio.h>


/**                                                                            
* main - program that prints the alphabet lowercase in reverse, followed by a new line
* Can only use putchar
* Return: 0
*/                                                                                                                                                        
int main(void)
{
char l = 'z'; 
while (l >= 'a')
{                                                                               putchar(l);
l -= 1;                                                                         
}                                                                               
putchar('\n');                                                                  
return (0);                                                                     
} 
