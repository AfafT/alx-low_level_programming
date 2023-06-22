#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - return the sum of all its paramters.
 * @n: The numb of paramters passed to the function.
 * @...: A variable num of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 *  Or else : the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

