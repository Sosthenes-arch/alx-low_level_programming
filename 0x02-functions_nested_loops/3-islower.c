#include "main.h"

/**
 * _islower - shows 1 if the input is a
 * lowercase char.
 * else it shows zero
 *
 * Return: 1 for lowercase char. 0 for anything else
 *
 */

int _islower(int c)
{

	if(c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
	
		return(0);
	} 

	_putchar("\n");
}
