// Write a recursive Program to implement Tower of Hanoi Problem
#include <stdio.h>

void tower(int n, char src, char aux, char dest)
{
    if (n == 1)
    {
        printf("Move disk %d from peg %c to peg %c", n, src, dest);
        return;
    }
    tower((n - 1), src, dest, aux);
    printf("\nMove disk %d from peg %c to peg %c\n", n, src, dest);
    tower((n - 1), aux, src, dest);
}

void main()
{
    int n;
    printf("Enter the size of disks: ");
    scanf("%d", &n);
    tower(n, 'A', 'C', 'B');
}