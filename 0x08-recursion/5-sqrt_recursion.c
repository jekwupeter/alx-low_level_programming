#include <stdio.h>
/**
 * checker -checkers the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return - natural sqaure root of number base
 */

int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - return the natrual square root of a number n
 * @n: number to check for square roots
 * Return - the natural square root of number
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
