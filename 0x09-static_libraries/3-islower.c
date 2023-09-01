#include "main.h"
#include <ctype.h>

/**
 * _islower - returns if a character is a lowercase
 * @c: the character to be checked
 *
 * Return: True 1 false 0
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
