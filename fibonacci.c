// Write a recursive program to find the nth fibonacci numbers

#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

void main()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d", &n);
    printf("Fib of %d is %d\n", n, fib(n));
}