#include "function_pointers.h"

/**
 *print_name - call-backs a function that prints a name
 *
 *@name: The name
 *@f: function that actually prints
 *
 *Returns: nada
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
