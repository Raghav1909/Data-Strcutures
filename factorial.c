// Write a C program to find the factorial of a given number

#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d! = %d", n, fact(n));
}