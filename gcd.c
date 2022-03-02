// Write a C program to find the gcd of two numbers

#include <stdio.h>

int gcd(int m, int n)
{
    if (n > m)
        return gcd(n, m);
    if (n == 0)
        return m;
    return gcd(n, m % n);
}

void main()
{
    int m, n;
    printf("Enter the values of m and n: ");
    scanf("%d %d", &m, &n);
    printf("GCD of %d and %d is %d\n", m, n, gcd(m, n));
}