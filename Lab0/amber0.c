#include <stdio.h>
long long unsigned factorial(unsigned n)
{
	long long unsigned result = 1; /* 0! = 1 */

	for (unsigned i = 1; /* Initialise i to 1 */
	     i <= n; /* Terminate if i <= n */
	     i++) /* Add 1 to i at the end of each loop */
	{
	result *= i; /* Multiply the result by i */
	}
	return result;
}
