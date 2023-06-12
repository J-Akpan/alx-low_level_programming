#include "main.h"

/**
 * Description: *_memcpy - function to copy memory area
 *
 * @n: param 1
 * @dest: params 2
 * @src: param 3
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d_ptr = dest;
	char *s_ptr = src;

	while (n--)
	{
		*d_ptr++ = *s_ptr++;
	}
	return (dest);
}
