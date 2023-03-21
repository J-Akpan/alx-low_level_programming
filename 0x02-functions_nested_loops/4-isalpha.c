#include "main.h"

/**
 * _isalpha - progran to check alphabets
 * @c: letter to be checked
 * Return: always 0 on success otherwise 1
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
