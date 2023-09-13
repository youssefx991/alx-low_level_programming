#include "function_pointers.h"

/**
 * print_name - prrints a name
 * @name: name to be printed
 * @f: function to print name
 *
 * Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
