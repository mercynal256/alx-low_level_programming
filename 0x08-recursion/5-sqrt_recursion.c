#include "main.h"

/**
 * helperFunction - checks if sqrt of number exists
 * @num: number.
 * @psqrt: possible sqrt of number.
 *
 * Return: sqrt of number of -1 for error.
 */

int helperFunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperFunction(n, 0));
	}
}
