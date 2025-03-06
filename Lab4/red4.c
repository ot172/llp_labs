unsigned fib(unsigned n)
{
    unsigned fib[2] = {0, 1}; // We only need two values
    if (n == 0) return 0;

    while (--n) // Run (n-1) times instead of n times
    {
        fib[1] = fib[0] + fib[1]; 
        fib[0] = fib[1] - fib[0]; // Update fib[0] to the previous fib[1]
    }
    return fib[1];
}
/* Here is a main function you can use to play with the fibonacci function. It
 * doesn't contain the bug, and thus should not be modified.*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
	{
        fprintf(stderr, "Usage: %s n\n", argv[0]);
        return -1;
    }

    int n = atoi(argv[1]);
    if (n < 0)
	{
        fprintf(stderr, "n must be unsigned\n");
        return -1;
    }

	printf("Fib(%u)=%u\n", (unsigned)n, fib(n));
    return 0;
}
