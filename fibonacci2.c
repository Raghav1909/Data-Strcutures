// Write a recursive program to find fibonacci numbers upto n

#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

void main()
{
    int n, i;
    printf("Enter the n value: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf("fib(%d) = %d\n", i, fib(i));
}