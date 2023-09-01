#include "main.h"

/**
 * _isalpha - checks if character is alpha
 * @c: chracter to be checked
 *
 * Return: alpha 1 not alpha 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
