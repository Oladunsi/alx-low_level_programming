#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed
 *	to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to be filled with @src.
 * @src: The source buffer to copy characters from..
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;
	unsigned int ind = 0;

	for (; ind < n; ind++)
		tmp[ind] = src[ind];
	return (tmp);
}
